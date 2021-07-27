//Auto

/*Em C++ é possível declarar uma variável ou parâmetro 
cujo tipo será deduzido do valor de uma expressão de inicialização.

Ex: auto a = 9.1;

A variável declarada como auto não pode mudar de tipo: ela será 
sempre do mesmo tipo da expressão usada para inicialização. 
Pode ser usado com ponteiro ou referência (auto* e auto&).*/


//Decltype

/* Semelhante ao auto, mas não é necessário inicializar a variável. 
decltype(expressão) retorna o tipo de uma expressão.

Ex: decltype( 9.1 ) x;

x nesse caso será double. Note que a expressão não é executada 
nem em tempo de compilação nem em tempo de execução - apenas 
o seu tipo é descoberto e durante a compilação. */

#include <iostream>

using namespace std;

bool antecessor(auto a, auto b) { 
    return a < b ? true : false; 
}

int main(){
    bool valor1 = antecessor(2, 1);
    bool valor2 = antecessor(4.1, 9.9);
    cout << valor1 << endl;
    cout << valor2 << endl;
    decltype(valor1) x;
    cout << x << endl;
    return 0;
}
