// Expressões Lambda

/* São expressões que se tornam functores on-the-fly. */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void for_each(auto inicio, auto fim, auto lambda){
    for(auto x = inicio; x != fim; ++x){
        lambda(*x);
    }
}

int main(){
    vector<int> v = {3, 7, 12, 15, 20, 21};

    int soma = 0;

    //A exmpressao virou uma função que soma tudo no vetor
    auto somador = [&soma](int x){ 
        soma += x;
    };

    //Functor
    // Lambda pode ser ponteiro para função apenas se não tiver nada entre [].
    // A expressao virpu uma função que imprime
    void (*functor)(int) = [](int x){
        cout << x << endl;
    };

    auto impares = [](int x){ 
        return x % 2 != 0; 
    };

    for_each(v.begin(), v.end(), somador);
    for_each(v.begin(), v.end(), functor);

    cout << "Possui "
         << count_if(v.begin(), v.end(), impares)
         << " numeros impares" << endl;
    
    cout << "Resultado da soma do numeros é: " << soma << endl;
}