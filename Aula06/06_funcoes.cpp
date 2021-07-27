// Functores 

/* Functores são objetos que redefinem o operador "()" */
#include <iostream>

using namespace std;

//So é redefinindo dentro de uma classe
class Media { //Essa classe vira um Functore
public:
    // é chamado como se fosse uma função
    double operator () (double a, double b){ 
        return (a + b) / 2.0;
    }
};

int main(){
    Media m;
    auto x = &Media::operator();
    cout << m(4, 6.7) << endl;
    cout << m.operator()(5, 8.1) << endl;
}