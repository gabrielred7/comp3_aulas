#include <iostream>
#include <string.h>

template <typename T>
const T& Max(const T& a, const T& b){
    return a > b ? a : b;
}

const char* Max(const char* a, const char* b){
    return strcmp(a, b) > 0 ? a : b;
}

int main(){
    using namespace std;

    //Dedução automática
    cout << Max(1.4, 1.6) << endl;

    //Instaciação explícita
    cout << Max<double>(1.4, 1) << endl;

    //Erro logico
    cout << Max("Alfa", "Beta") << endl;
    //Aqui foi pego o valor que tem maior endereço

}
