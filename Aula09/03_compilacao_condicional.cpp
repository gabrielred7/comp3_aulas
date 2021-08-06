// Compilação condicional

/* Uma parte do programa fonte não será compilado
dependendo do uso de simbolos. Podemos definir símbolos 
e testá-los durante a compilação usando os comandos 
#define, #ifndef e #endif. 

No código abaixo, apenas se o símbolo NDEBUG não 
estiver definido é que o teste será compilado: */

#include <assert.h>
#include <iostream>

using namespace std;

void funcao( int n ) {

#ifndef NDEBUG
  if( n % 2 == 0 )
    cout << "A função deve receber um número ímpar" << endl;
#endif    

  // resto do código da função
}

int main() {
  for( int i = 0; i < 1000000000; i++ )
    funcao( i*2 + 1 );
}

/* Para definir NDBUG, temos duas opções: definir no próprio código 
ou na hora de compilar:

 g++ -D NDEBUG main.cc -o saida */