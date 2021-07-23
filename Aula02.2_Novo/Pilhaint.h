#ifndef PILHAINT_H_INCLUDED
#define PILHAINT_H_INCLUDED

#define MAX_PILHA 10
class PilhaInt{
public:
    //Construtor
    PilhaInt();

    //Fun��es de acesso aos dados (m�todos)
    void empilha(int valor);
    int desempilha();

private:
    // Estrutura de dados escondida
    int tab[MAX_PILHA];
    int atual;
};

#endif // PILHAINT_H_INCLUDED
