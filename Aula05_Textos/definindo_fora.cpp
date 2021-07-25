#include <iostream>
#include <vector>

using namespace std;

/* Redefinindo operador fora da classe */
template <int N = 3, typename T = double>

class Vetor {
public:
    void imprime (ostream& o) const {
        for(auto x : d)
            o << x << " ";
    }

private:
    T d[N];
};

ostream& operator << (ostream& o, const Vetor<3, double>& v){
    v.imprime(o);
    return o;
}

int main( int argc, char *argv[] ){
    Vetor<3, double> a, b, c;
    cout << a << endl;
    return 0;
}
