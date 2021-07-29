//Smart Pointers

/* Já o shared_ptr representa um ponteiro para um objeto que pode 
ser compartilhado com outros ponteiros. É mantido um contador de 
referências de outras variáveis do tipo shared_ptr apontando para 
o mesmo objeto. Quando esse contador de referências chega a zero, 
o objeto é destruído.

Essa é a melhor solução para uso de ponteiros em geral. Dê preferência 
a ela, e se for necessário otimizar, analise se é possível usar 
std::unique_ptr. Uma desvantagem de shared_ptr é que não resolve o problema 
das referências circulares, e usa um ponteiro para inteiro a mais que unique_ptr. */

#include <iostream>
#include <memory>

using namespace std;

class Teste{
public:
    Teste(){
        cout << "Construiu " << this << endl;
    }  

    ~Teste(){
        cout << "Destruiu " << this << endl;
    }
};

int main(){
    shared_ptr<Teste> a{ new Teste() };
    shared_ptr<Teste> b{ new Teste() };
    shared_ptr<Teste> c;
    c = a;
    a = b;
    cout << "inicio" << endl;
    c.reset( new Teste() );
    cout << "atributo" << endl;
}

/* Por último temos std::weak_ptr (nao inclementa o contador de ref), 
que deve ser usado em combinação com shared_ptr para resolver o 
problema da referência circular. */