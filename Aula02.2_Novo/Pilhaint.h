#ifndef PILHAINT_H_INCLUDED
#define PILHAINT_H_INCLUDED

#define MAX_PILHA 10
class PilhaInt{
public:
    //Construtor
    PilhaInt();

    //Funções de acesso aos dados (métodos)
    void empilha(int valor);
    int desempilha();

private:
    // Estrutura de dados escondida
    int tab[MAX_PILHA];
    int atual;
};

#endif // PILHAINT_H_INCLUDED
