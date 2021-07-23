#include <iostream>

using namespace std;

/*
template <typename A, typename B>
bool antecessor (A a, B b){
    return a < b ? true : false;
}
*/

//(açucar sintatico)
bool antecessor (auto a, auto b){
    return a < b ? true : false;
}

int main(){
    bool valor1 = antecessor(2, 1);
    bool valor2 = antecessor(4.1, 9.9);
    cout << valor1 << endl;
    cout << valor2 << endl;
    return 0;
}
