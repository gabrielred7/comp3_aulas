#include <iostream>
#include <stdio.h>

#include "Pilhaint.h"

using namespace std;

int main(){
    PilhaInt p;
    int x;

    p.empilha(8);
    p.empilha(11);
    x = p.desempilha();
    cout << "Funcionou" << endl;
}
