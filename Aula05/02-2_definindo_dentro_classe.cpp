#include <iostream>

using namespace std;

/* Redefinindo operador dentro da classe */
Matriz adicao(const Matriz& a, const Matriz& b){
    // uma fun��o que soma matrizes
}

class Matriz {
public:
    // Redefini��o do operador chamando a fun��o anterior
    Matriz operator + (const Matriz& b) const {
        return adicao(*this, b);
    }

    Matriz operator + (double a, const Matriz& b){
        return adicao(a, b);
    } // NAO PODE! Exclusivamente fora da classe
};

int main(){

}
