#include <iostream>
#include <stdio.h>

const int MAX_PILHA = 20
using namespace std;

//Evolu��o com OO do exemplo anterior
class PilhaInt{
public:

    //Construtor
    PilhaInt(){
        for(int i = 0; i < MAX_PILHA; i++)
            tab[i] = 0;
        atual = 0;
    }

    //Fun��es de acesso aos dados (m�todos)
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
    x = p.desempilha();
    cout << "Funcionou" << endl;
}
