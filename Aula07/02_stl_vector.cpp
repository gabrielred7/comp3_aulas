//Classe stl::vector

/* A classe template vector foi criada para substituir arrays. 
Use-a sempre que for possível. Vector testa limites de arrays 
quando o operador [ ] for usado. */

#include <iostream>
#include <vector>

using namespace std;

void foo(const vector<int>& v){ //vector por default faz uma copia, para nao copiar tem que colocar como "const ref(&)""
    int a = v[0];
    cout << a << endl;
}

int main(){
    vector<int> v;
    v.push_back(9); //para adicionar algo
    v.push_back(7);
    v.push_back(12);

    for (auto x : v){
        cout << x << " ";
    }

    v[1] = 1; //alterando valor

    cout << endl;
    foo(v);
    
    for (unsigned int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    vector<int> v_n;
    for (int i = 0; i < 20; i++){
        cout << v_n.size() << "/" << v_n.capacity() << endl; 
        //capacity() dobra a capacidade a medida que se inseri elementos
        v_n.push_back(i);
    }

    vector<int> v_l = {1, 4, 7, 9, 11};
    for (int i = 0; i < 20; i++){
        cout << v_l.size() << "/" << v_l.capacity() << endl;
        v_l.push_back(i);
    }

    vector<int> v_a(5);
    for (int i = 0; i < v_a.size(); i++){
        cout << v_a.at(i) << endl; // at() cria espaço no vetor
    }
    
    cout << v_a.at(100) << endl;
    v[100] = 0;
    return 0;
}
