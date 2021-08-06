#include <iostream>
#include <string>

using namespace std;

class Exception{
public:
    Exception( string msg ): _msg(msg) {}
    virtual ~Exception(){}
    virtual string msg() const { return _msg; }

private:
    string _msg;
};

int main(){
    try
    {
        throw Exception( "Uma mensagem de erro" );
        cout << "Não será executado!" << endl;
    }
    catch(const Exception& e)
    {
        cout << "Uma exceção Exception ocorreu: " << e.msg() << endl;
    }
    cout << "Se a exceção for tratada, sera excluida!" << endl;
}