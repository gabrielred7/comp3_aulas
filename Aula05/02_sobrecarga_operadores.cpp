#include <iostream>

using namespace std;

/* Redefinindo operador fora da classe */
Matriz multiplicacao(const Matriz& a, double b){
    // uma fun��o que soma matrizes
}

// Redefini��o do operador chamando a fun��o anterior
Matriz operator * (const Matriz& a, double b){
    return multiplicacao(a, b);
}

int main(){

}
