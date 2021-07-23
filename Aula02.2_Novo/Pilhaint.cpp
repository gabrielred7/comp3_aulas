#include <iostream>
#include <stdio.h>

#include "Pilhaint.h"

using namespace std;

PilhaInt::PilhaInt() {
    for( int i = 0; i < MAX_PILHA; i++ )
        tab[i] = 0;
    atual = 0;
}

void PilhaInt::empilha( int valor ) {
    tab[atual++] = valor;
}

int PilhaInt::desempilha() {
    return tab[--atual];
}
