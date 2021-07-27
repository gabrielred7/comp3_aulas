#include <iostream>

using namespace std;

class PilhaInt{
public:
    PilhaInt(){
        for(int i = 0; i < MAX_PILHA; i++)
            tab[i] = 0;
        atual = 0;
        cout << "Chamou o construtor: " << this << endl;
    }

    void empilha(int valor){
        tab[atual++] = valor;
    }

    int desempilha(){
        return tab[--atual];
    }

private:
    static const int MAX_PILHA = 128;
    int tab[MAX_PILHA];
    int atual;
};

int main(){
    PilhaInt p, *q = new PilhaInt();
    PilhaInt *tab = new PilhaInt[10];
    int x, y;

    q->empilha(8);

    p.empilha(8);
    p.empilha(11);

    x = p.desempilha();

    cout << x << endl;

    delete q;
    delete [] tab;
}
