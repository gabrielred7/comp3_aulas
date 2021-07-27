//Listas de inicialização

/* São listas bem simples de um determinado tipo T declaradas
automaticamente quando se tem uma lista de valores entre { e }. */

#include <initializer_list>
#include <iostream>

using namespace std;

int main(){
    initializer_list<int> v = {1, 2, 4, 5, 9};
    auto vv = {"1", "2", "4", "5", "9"};

    for (auto x : v){
        cout << x << " ";
    }

    cout << endl;

    for (const char * x : vv){
        cout << x << " ";
    }
    
    cout << endl;
}