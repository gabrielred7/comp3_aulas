//Move Constructor e Copy Constructor

/* Normalmente ao se declarar um move constructor será necessário 
declarar também um copy constructor, move assignement 
e copy assignment. O compilador deleta as versões default 
quando um move constructor ou move assignment é declarado. */

//move constructor dar a possibilidade de alterar um objeto é constante

#include <iostream>
#include <string.h>

using namespace std;

template <int L, int C>
class Matriz {
public:
    typedef double Linha[C];

    // new pode ser usado para alocar memoria com o tipo correto, como o malloc
    Matriz(): v(new Linha[L]){
        cout << "Criou a matriz: " << this << "/" << v << endl;
    }

    Matriz(Matriz&& m): v(m.v){ // os && diz que se tem um ponteiro para um objeto temporario, a principio constante mas que nao é
    //Ao inves de alocar uma nova matriz e copiar tudo para lá, simplesmente copia os ponteiros ("roubar" a memoria)
        cout << "Move Constructor!" << endl;
        m.v = nullptr; //Para os ponteiros nao chamarem delete no destrutor
    }

    Matriz(const Matriz& m): v(new Linha[L]){
        cout << "Copy constructor!" << this << "/" << v << endl;
        for (int i = 0; i < L; i++){
            for (int j = 0; j < C; j++){
                v[i][j] = m.v[i][j]; //Cria uma matriz
            }
        }
    }

    ~Matriz(){
        cout << "Destruiu: " << this << "/" << v << endl;
        delete [] v; //vai verificar se "v" é nulo, se for ele nao faz nada. Nao pode dar free num ponteiro nulo, mas em c++ o delete testa antes de desalocar um ponteiro
    }

    const Matriz& operator = (const Matriz& m){
        cout << "Copiou elementor" << endl;
        for (int i = 0; i < L; i++){
            for (int j = 0; j < C; j++){
                v[i][j] = m.v[i][j]; //Cria uma matriz
            }
        }
        return *this;
    }

    const Matriz& operator = (Matriz&& m){ //atribuição usando uma variavel temporaria
        cout << "Move assigment! " << endl;
        cout << " deletou " << v << endl;
        delete [] v; //deleta o v e reatribui
        v = m.v;
        m.v = nullptr;
        return *this;
    }

    void soma(const Matriz& a, const Matriz& b){
        for (int i = 0; i < L; i++){
            for (int j = 0; j < C; j++){
                v[i][j] = a.v[i][j] + b.v[i][j];
            }           
        }
    }

private:
    Linha *v; 
};

template <int L, int C>
Matriz<L, C> operator + (const Matriz<L,C>& a, const Matriz<L, C>& b){
    Matriz<L,C> resultado;
    resultado.soma(a, b);
    return resultado;
}


int main(){
    Matriz<300, 500> a, b;
    Matriz<300, 500> c, d;

    c = a + b;    
    return 0;
}