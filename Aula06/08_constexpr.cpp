// Palavra Reservada constexpr

/* Palavra reservada que indica que o valor da expressão 
pode (e deve) ser calculado durante a compilação. 
É uma propriedade transitiva para funções e constantes. */

#include <iostream>
#include <vector>
#include <map>
#include <initializer_list>
#include <algorithm>

using namespace std;

//pode ser avaliado durante a compilação (tambem) e nao durante a execução
constexpr int quadrado(const int n){
    return n*n;
}

//permite fazer função recursiva e avaliar durante a compilação
constexpr int fat(int n){
    return n <= 0 ? 1 : fat(n-1);
}

int main(){
    int h = fat(573);
    // isso só é possivel porque a função é chamada na compilação
    const int q = quadrado(8); 
    cout << h << endl;
    cout << q << endl;
    return 0;
}

