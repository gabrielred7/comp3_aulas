// try/cacth para funções

/* Try/catch é um mecanismo usado para tratar excessões.
Em C++ o bloco try catch pode ser o bloco principal da 
própria função/método, ou seja uma função a propria 
função já está definida no bloco. */

#include <iostream>
#include <stdlib.h>
#include <string>

int foo() try {

  // Código da função
  return 0;
} catch( string ) {

  // Código do tratador de exceção
  return 1;
}

int main(){
    foo();
    return 0;
}