#include <iostream>
#include <stdio.h>
#define MAX_PILHA 10

using namespace std;

//Exemplo de Função usando Template
template <class Etype>
inline const Etype& Max (const Etype& a, const Etype &b){
    return a > b ? a : b;
}

template <typename Tipo>
class Pilha{

public:
    Pilha(){
        for( int i = 0; i < MAX_PILHA; i++ )
            tab[i] = 0;
        atual = 0;
    }
    void empilha(Tipo valor){
        tab[atual++] = valor;
    }

    Tipo desempilha(){
        return tab[--atual];
    }

private:
    // Estrutura de dados escondida
    Tipo tab[MAX_PILHA];
    int atual;
};

int main(){
    cout << "Pilha-Template" << endl;
    Pilha<int> p1;
    Pilha<double> p2;
    Pilha<Pilha<int>> p3;

    p1.empilha(8);
    p2.empilha(11.5);

    p3.empilha(p1);
}
