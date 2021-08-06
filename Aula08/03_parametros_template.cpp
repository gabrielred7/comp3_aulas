// Parâmetros template para templates

/* Templates podem receber parâmetros que são nomes de outra templates. */

#include <vector>
#include <list>
#include <iostream>
#include <math.h>
#include <string>

using namespace std;

template <typename T, typename A, template<typename, typename> class Estrutura>

ostream& operator << (ostream& o, Estrutura<T, A>& col1){
    for (auto x : col1){
        o << x << " ";
    }
    return o;
}

int main( int argc, char* argv[]){
    vector<int> v{1, 2, 4};
    list<double> l{5, 8, 9};
    //albos acima sao tipos de templates, como type e allocator

    cout << v << endl;
    cout << l << endl;

    return 0;
}

/* Devemos declarar um parâmetro template contendo o número de parâmetros 
que a template precisa, incluindo os parâmetros default 
(lembre-se de que vector possui dois parâmetros: tipo e allocator). */