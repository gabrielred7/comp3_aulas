// Postergando uma operação

/* Não podemos definir novos operadores em C++, e também não podemos 
alterar a precedência dos operadores, bem como o seu número de parâmetros. 
No entanto, podemos decompor uma operação em várias etapas intermediárias 
usando classes auxiliares para guardar esses resultados intermediários. 
Essas classes funcionam juntando os operandos para podermos ao final realizar 
a operação desejada.

Ex: para poder escrever um Vetor que recebe elementos através de uma 
expressão "v = 2, 3;" podemos fazer como abaixo: */

#include <iostream>
#include <vector>

using namespace std;

class Vetor;
//Redefinição do operador ,
class MeioDaOperacaoAtr{
public:
    MeioDaOperacaoAtr(Vetor* v): vetor(v){}
    MeioDaOperacaoAtr operator , (int n);

private:
   Vetor *vetor;
};

class Vetor{
public:
    MeioDaOperacaoAtr operator = (int n){
        tab.push_back(n);
        return MeioDaOperacaoAtr(this);
    }

    void imprime() {
        for( auto x : tab )
	    cout << x << " ";
        cout << endl;
    }

private:
    vector<int> tab;
};

// Sobrecarga do , e Acessa a class MeioDaOperacaoAtr
inline MeioDaOperacaoAtr MeioDaOperacaoAtr::operator , (int n){
    *vetor = n;
    return * this;
}

int main (int argc, char *argv[]){
    Vetor v;

    v = 2, 4, 7, 34, 56;
    v = 87, 59;
    v.imprime();
    return 0;
}