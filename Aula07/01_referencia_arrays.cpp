//Referência para arrays

/* Para podermos criar uma referência para um array 
devemos inverter a precedência do '[]' sobre o '&', 
usando parênteses.

Isso é para garantir que o tamanho do array nao se perca 
com a referencia */

#include <iostream>

using namespace std;

template <typename T, int n>
inline int tam( T(&t)[n]  ) { // a função receberá uma referencia para um array (obs: array é um ponteiro)
    return n;  
}

int main() {
    int l[9];
    cout << tam(l) << endl;  
    return 0;
}  

/* No exemplo acima, estamos usando essa construção para descobrir o tamanho de um array. */