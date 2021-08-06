// Compilação condicional com assert

/* O assert é uma macro já pré-definida em assert.h 
que dá um erro de execução e aborta o programa se o 
teste for falso. Se a constante NDEBUG for definida, 
o assert não é executado. */

#include <assert.h>
#include <iostream>

using namespace std;

void funcao( int n ) {
    assert( n % 2 != 0 );
    cout << "A função deve receber um número ímpar" << endl;
    // resto do código da função
}

int main() {
    funcao(4);
  
    for( int i = 0; i < 1000000000; i++ )
        funcao( i*2 + 1 );
}