#include <iostream>

using namespace std;

/* Redefinindo operador fora da classe */
Matriz multiplicacao(const Matriz& a, double b){
    // uma função que soma matrizes
}

// Redefinição do operador chamando a função anterior
Matriz operator * (const Matriz& a, double b){
    return multiplicacao(a, b);
}

int main(){

}
