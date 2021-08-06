// Introdução à Metaprogramação

/* É possível realizar cálculos recursivos usando o 
mecanismo de templates em C++. Basicamente devemos 
ter um caso genérico recursivo e um caso específico 
não recursivo. O cálculo deve ser feito em uma variável 
"const static" da classe ou struct. */

#include <iostream>
#include <vector>

using namespace std;

//Como são tipos de dados, sera executado durante a compilação
template <int N>
//Caso Generico Recursivo
struct Fib {
  static const long long value = Fib<N-2>::value + Fib<N-1>::value;
}; 

//Casos Específicos Não Recursivos
template <>
struct Fib<0>{
    static const long long value = 0;
};

template <>
struct Fib<1>{
    static const long long value = 1;
};

int runtime_Fib( int n ){
    if (n == 0 || n == 1){
        return n;
    } else {
        return runtime_Fib(n - 2) + runtime_Fib(n - 1);
    }
}

int main(){
    cout << Fib<60>::value << endl;
    cout << runtime_Fib(50) << endl;
    return 0;
}
