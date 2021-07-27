// Deduzindo o valor de retorno de uma função com auto

/* Podemos usar auto para deduzir o tipo do valor de retorno 
de uma função. A sintaxe prevista é colocar a palavra reservada auto, o nome e os parâmetros da função e uma seta: */

#include <iostream>

using namespace std;

//Uso da seta em retorno de funções
auto foo() -> double{ //indica que o retorno sera double
    return 0;
}

auto foo( int a, int b) -> decltype(a/b){
    return 0;
}

// Uma função pode ter o tipo de retorno deduzido por auto, incluindo parâmetros
// auto (uma sintaxe alternativa para templates)

template <typename A, typename B>
auto Max2(A a, B b) -> decltype(a*b){ // o valor de retorno e dado por decltype
    return a > b ? a : b;
}

int main(){
    cout << Max2(2.1, 2) << endl;
    return 0;
}

//A maior utilidade dessa construção é para templates.

//Note que o comando decltype também pode ser utilizado.


