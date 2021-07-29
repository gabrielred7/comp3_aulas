//Iteradores em vectors

/* Os iteradores devem ser obtidos através do método begin, 
e comparados com o método end. Um iterador tem os 
operadores * e ++ (e possivelmente --) redefinidos. 
Para entender o funcionamento, faça uma analogia com 
ponteiros: um itr de um vector<int> é um "int*". */

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {2, 5, 1, 7};
    for (auto itr = v.rbegin(); itr != v.rend(); ++itr){ 
        // o iterador itr é como se fosse um ponteiro
        cout << *itr << " ";    
    }
    cout << endl;
    for (vector<int>::const_iterator itr = v.begin(); itr != v.end(); ++itr){ 
        // o iterador itr é como se fosse um ponteiro
        cout << *itr << " ";    
    }
    cout << endl;
    for (vector<int>::reverse_iterator itr = v.rbegin(); itr != v.rend(); ++itr){ 
        // o iterador itr é como se fosse um ponteiro
        cout << *itr << " ";    
    }
    cout << endl;
    for (auto x : v){
        cout << x << " ";
    }
}

