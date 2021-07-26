#include <iostream>
#include <stdio.h>

#define MAX_PILHA 10
using namespace std;

//Evolução com OO do exemplo anterior
class PilhaInt{
public:

    //Construtor
    PilhaInt(){
        for(int i = 0; i < MAX_PILHA; i++)
            tab[i] = 0;
        atual = 0;
    }

    //Funções de acesso aos dados (métodos)
    void empilha(int valor){
        tab[atual++] = valor;
    }

    int desempilha(){
        return tab[--atual];
    }

private:

    // Estrutura de dados escondida
    int tab[MAX_PILHA];
    int atual;
};

int main(){
    PilhaInt p;
    int x;

    p.empilha(8);
    p.empilha(11);
    x = p.desempilha();
    cout << "Funcionou" << endl;
}
