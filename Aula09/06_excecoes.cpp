// Exceções

#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

class Excecao{
public:
    Excecao( const char* st ): msg( st ){};
    const char *msg;
};

template <class tipo>
tipo& Array<tipo>::operator[](int n){
    if (n < 0 || n >= max){
        throw Excecao("Limites de array excedidos");
    }
    return tab[n];
}

void main(int argc, char* argv[]){
    ArrayPtr<int*> t(10);
    int *b;
    t[1] = new int;

    try {
        b = t[10];
    } 
    catch (Excecao e) {
        cout << e.msg << endl;
    }
}