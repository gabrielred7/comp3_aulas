// Typename

/* Quando usamos um tipo definido (typedef) 
dentro de uma classe que é passada como template 
é necessário utilizar a palavra reservada typename antes: */

#include <iostream>
#include <vector>

using namespace std;

// quando criamos uma template usamos typename
template <typename T>
void imprime(const vector<T>& novo){
    for (typename vector<T>::const_iterator i = novo.begin(); i != novo.end(); ++i){
        cout << *i << " ";
    }
}

int main(){
    vector<int> v;
    vector<double> dd;

    v.push_back(9);
    v.push_back(7);
    v.push_back(12);

    dd.push_back(3.14);
    dd.push_back(2.78);

    imprime(v);
    cout << endl;
    imprime(dd);
    return 0;
}

/* Se for necessário usar um tipo interno de uma
template (vector<T>::iterator) dentro de uma outra
template, é necessário usar typename na frente.
Outra alternativa é usar auto. */