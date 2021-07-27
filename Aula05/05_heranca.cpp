#include <iostream>

using namespace std;

class Base{ //Para uma classe ser abstrata basta ter um metodo abstrato
public:
    /* Para o polimorfismo funcionar é necessario declarar 'virtual' */
    virtual void metodo(){
        cout << "Metodo da classe base" << endl;
    }

    virtual void metodo2(){
        cout << "Metodo da classe base" << endl;
    }

    /* Se voce nao sabe se uma classe vai ser derivada, devemos declarar o destrutor como virtual */
    virtual ~Base(){}

private:
    int x;
};

class Derivada: public Base {
public:
    int size(){
        return sizeof( *this );
    }

    void metodo(){
        cout << "Metodo da classe derivada" << endl;
    }

    void metodo2(){
        cout << "Metodo da classe derivada" << endl;
    }
};

void foo( Base &x ){
    x.metodo();
    x.metodo2();
}

int main(){
    Derivada d;
    Base *pb = &d;
    Base *b;

    foo(d);
    foo(*pb);
    /*foo(d);
    pb->metodo();

    cout << "Base: "  << sizeof( b )
         << "&b: " << &b << endl;
    cout << "Derivada: " << sizeof( d )
         << "&d: " << &d << endl;
    */
}
