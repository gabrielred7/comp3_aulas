#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PILHA 10

using namespace std;

struct PilhaInt{
    int tab[MAX_PILHA];
    int atual;
};

void empilha(PilhaInt* p, int valor){
    // Teste de Overflow
    if(p -> atual < MAX_PILHA + 1)
        p -> tab[p -> atual++] = valor;
    else
        printf("Estouro do limite da pilha!");
}

int desempilha(PilhaInt* p){
    // Teste de Overflow
    if (p -> atual > 0)
        return p -> tab[--p -> atual];
    else
        printf("Pilha vazia!");
}

void inicializaPilha(PilhaInt* p){
    for(int i=0; i < MAX_PILHA; i++)
        p -> tab[i] = 0;
    p -> atual = 0;
}

int main(){
        PilhaInt p = {{0}, 0};
        int x;
        inicializaPilha(&p);
        empilha(&p, 8);
        empilha(&p, 11);
        x = desempilha(&p);
        printf("Ocorreu tudo bem");
        return 0;
}
