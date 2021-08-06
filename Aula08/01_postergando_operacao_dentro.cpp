#include <iostream>
#include <vector>

using namespace std;

class Vetor {
public:

    class MeiaDaOperacaoAtr{
    public:
        MeiaDaOperacaoAtr operator , (int n){
            *vetor = n;
            return *this;
        }

    private:
        MeiaDaOperacaoAtr( Vetor* v ): vetor(v){}
        Vetor *vetor;
        friend class Vetor;
    };

    MeiaDaOperacaoAtr operator = (int n){
        tab.push_back(n);
        return MeiaDaOperacaoAtr(this); // Retorna um objeto MeiaDaOperacaoAtr
    }

    void imprime(){
        for (auto x : tab)
            cout << x << " ";
        cout << endl;
    }

private:
    vector<int> tab;
};

int main( int argc, char *argv[]){
    Vetor v;
    v = 2, 4, 7, 34, 56;
    v = 87, 59;
    v.imprime();
    return 0;
}