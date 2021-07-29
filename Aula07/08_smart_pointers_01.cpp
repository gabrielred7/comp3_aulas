// Smart Pointers

/* Ponteiros inteligentes são definidos na namespace std no arquivo de cabeçalho <memory>. 
Eles são essenciais para o idioma RAII (Aquisição de Recurso é Inicialização).  O objetivo 
principal dessa linguagem é garantir que a aquisição de recursos ocorra ao mesmo tempo em que 
o objeto é inicializado, de forma que todos os recursos do objeto sejam criados e preparados 
em uma linha de código.  Em termos práticos, o princípio fundamental do idioma RAII é fornecer 
a propriedade de qualquer recurso alocado a heap, por exemplo, memória alocada dinamicamente ou 
identificadores de objetos do sistema, a um objeto alocado em pilha cujo destrutor contenha o 
código para excluir ou liberar o recurso e também qualquer código de limpeza associado.

Existem três classes que implementam esses conceitos: std::unique_ptr, std::shared_ptr e std::weak_ptr.

std::unique_ptr é uma classe que implementa um ponteiro que não deve ser compartilhado. 
Ao criar um unique_ptr, um ponteiro deve ser passado para o mesmo. Ao fim do escopo de 
uma variável desse tipo o seu destrutor é chamado, e ele libera o ponteiro associado. 
Um unique_ptr pode sofrer uma atribuição apenas de um objeto temporário unique_ptr 
(recém criado) e inicializado com um ponteiro. */

#include <memory>
#include <iostream>

using namespace std;

class Teste {
public:
    Teste(int v):_valor(v) { cout << "Criou " << this << endl; }
    ~Teste(){ cout << "Destruiu " << this << endl; }
    
    int valor(){
        
        return _valor;
    }

private:
    int _valor;
};

//Fuction que retorna unique_ptr
unique_ptr<Teste> novo_elemento(int valor){
    return unique_ptr<Teste> (new Teste(valor));
}

int main() {
    unique_ptr<Teste> p{ new Teste(12) }; //Servi como um ponteiro mas seguindo o RAII
    unique_ptr<Teste> outro{ new Teste(15) };

    cout << p -> valor() << endl;

    p = unique_ptr<Teste>( new Teste(19) );

    cout << p -> valor() << endl;

    outro = novo_elemento(789);

    cout << outro -> valor() << endl;

    // p = outro, erro de compilação pq o endereço de um é exclusivo unicamente dele.

    return 0;
}
