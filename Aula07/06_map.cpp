//maps

/* maps em C++ redefinem o operador [], mas cuidado: se houver acesso a um elemento que não está no map ele será criado */

#include <iostream>
#include <map>

using namespace std;

int main() {
    map<string, int> m = {
        { "Março", 30}
    }; //map é um vector de pares
    const map<string, int>& f = m;
    
    m["Janeiro"] = 31;
    m["Fevereiro"] = 28; //colchete nao é constante entao nao pode ser chamado quando for constante

    //Cuidado: se nao existir a chave, o operador [] insere.
    cout << m["Janeiro"] << endl;

    if (m.find("Fevereiro") != m.end()){
        cout << "Existe: " << m["Fevereiro"] << endl;
    }else{
        cout << "Não existe" << endl;
    }
    cout << m.size() << endl;

    for (map<string, int>::value_type x : m){
        cout << x.first << " " << x.second << endl;      
    }
}