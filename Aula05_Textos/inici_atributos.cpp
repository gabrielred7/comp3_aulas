#include <iostream>
#include <string>

using namespace std;

class Base {
private:
    // Inicialização na Declaração
    int campo;
    string nome;

public:
    //Inicialização no Construtor
    Base(int n = 0): campo(n){
        cout << "C" << endl;
    }
    //Base(): nome("Classe Base"){}

    ~Base(){
        cout << "D" << endl;
    }
};

int main(){
    Base b(9);
    Base c[4] = {1, 2, 3, 4};
    //Base d[100];
}
