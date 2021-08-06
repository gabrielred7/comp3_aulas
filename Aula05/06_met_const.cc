#include <iostream>
using namespace std;

class Base{
private:
    int contador = 0;
    
  public:
    Base() {};
    virtual void metodo() { 
      cout << "base" << endl;
    };   
    
    virtual void metodo() const { 
      cout << "base const" << endl;
    };
};

class Derivada: public Base
{
 public:
   Derivada(): Base() {};
   virtual void metodo() { 
     cout << "derivada" << endl; 
   };
   virtual void metodo() const { 
     cout << "derivada const" << endl; 
   };
};

void f( Base& b )
{
  b.metodo();
}

int main()
{
  Base base;
  Derivada derivada;

  f( base );
  f( derivada );
}