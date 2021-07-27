// Templates com parâmetros constantes

/* Uma template pode receber um parâmetro constante, normalmente, 
limitado a um tipo integral - enum, int ou ponteiro 
(no futuro, classes serão incluídas). */

#include <iostream>

using namespace std;

template <int N> //constante

inline int escala (int x){
    return N * x;
}

const int n = 7;

int main(int argc, char *argv[]){
    cout << escala<10>(8) << endl;

    //Podemos obter o endereço de uma função template instanciando ela
    int (*ptrFun)(int) = &escala<n>;
    cout << ptrFun(9) << endl;
    cout << ptrFun(2) << endl;

    //Outra forma, mais pratica
    auto ptrFun2 = &escala<78>;
    cout << ptrFun2(10) << endl;
    return 0;
}