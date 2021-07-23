#ifndef PILHAINT_H_INCLUDED
#define PILHAINT_H_INCLUDED

#define MAX_PILHA 10
class PilhaInt{
public:
    //Construtor
    PilhaInt();
    PilhaInt(const PilhaInt& p);
    //Funções de acesso aos dados (métodos)
    void empilha(int valor);
    int desempilha();

    //Construtor de copia
    const PilhaInt& operator = (const PilhaInt& p){
        atual = p.atual;
        for (int i=0; i<atual; i++)
            tab[i] = p.tab[i];
        return *this; //ponteiro para o proprio objeto
    }

    //Sobreposição
    PilhaInt& operator << (int valor){
        empilha(valor);
        return *this;
    }

private:
    // Estrutura de dados escondida
    int tab[MAX_PILHA];
    int atual;
};

#endif // PILHAINT_H_INCLUDED
