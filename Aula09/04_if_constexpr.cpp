// if constexpr

/* É uma outra forma de realizar uma 
compilação condicional. */

#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main(){
    if constexpr(N > 0) // n tem que ser uma constante 
        cout << "Uma coisa" << endl;
    else 
        cout << "Outra coisa" << endl;
}

/* A diferença para um if comum é que o código será 
gerado para a parte que não é executada. Nem o próprio 
código do teste é gerado.

Podemos combinar o uso de auto e de templates com if 
constexpr para ter um poderoso mecanismo de dedução de tipos. Exemplo abaixo:*/

constexpr int N = 1;

auto foo() { //com o constexpr foi possivel retorna 3 funções diferentes mas so uma será compilar. 
    if constexpr(N > 0) {
        return string( "string qualquer" );
    } 
    else if constexpr( N == 2 ) { 
        return vector<int>{ 9, 7 };
    } else { 
        return -1;
  }
} 