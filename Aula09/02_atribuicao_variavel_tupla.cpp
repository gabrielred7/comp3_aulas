// Atribuição de mais de uma variável usando tuplas

/* Uma combinação interessante é usar a atribuição múltipla 
com tuplas (std::tuple). Para criar uma tupla no retorno de 
uma função basta escrever um "return tuple{ a, b};" e usar 
auto no tipo de retorno da função. */

#include <iostream>
#include <string>
#include <math.h>
#include <tuple>

using namespace std;

auto toPolar (double x, double y){
    double distancia = sqrt(x * x + y * y);
    double angulo = atan(x / y) * 180 / 3.1415;

    return tuple<double, double>{ angulo, distancia }; //retorna um tupla contendo os dois elementos
}

int main(){
    auto[ a, d ] = toPolar(3, 4);
    cout << a << endl;
    cout << d << endl;
    return 0;
}

/* Além disso, se for necessário acessar um campo de um objeto 
da classe tuple podemos fazê-lo através da função std::get<N>(tuple), 
onde N é a posição relativa do campo (o primeiro é 0). */