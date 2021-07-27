//Especialização de templates 

/* Uma template pode ser especializada para um tipo ou valor específico. Nesse caso, devemos declarar uma versão da template com o valor específico desejado para a especialização. Por exemplo, se temos uma implementação mais adequada para const char*, podemos fazer a seguinte declaração: */

#include <iostream>
#include <string.h>

//Geral
template <typename T>
T Max( T a, T b){
    return a > b ? a : b;
}

//Especialização
//Pega esse no lugar do T para o caso do char pointer
template <>
const char* Max(const char* a, const char* b){
    return strcmp(a, b) > 0 ? a : b;
}

int main(){
    using namespace std;

    //Dedução automatica
    cout << Max(1.4, 1.6) << endl;

    //Explicita
    cout << Max<double>(1.4, 1) << endl;

    //Corretamente
    cout << Max("Alfa", "Beta") << endl;
}