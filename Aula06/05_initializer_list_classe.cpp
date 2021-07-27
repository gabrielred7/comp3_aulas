// Listas de inicialização Versao 2.0

/* Podemos usar esse tipo initializer_list para 
declarar parâmetros para contrutores, definindo 
uma forma bem prática para inicializar objetos.*/

#include <initializer_list>
#include <iostream>

using namespace std;

class Matriz{
public:
    Matriz(const initializer_list<initializer_list<double>>& v){}
};

void print(const initializer_list<int>& v){
    for (auto x : v){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    Matriz m{ {1, 3, 4}, {3, 3, 2}, {4}};
    print({1, 5, 7 ,0});
}