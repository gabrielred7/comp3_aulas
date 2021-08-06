// Atribuição de mais de uma variável (structured binding declarations)

/* É um mecanismo que permite que o programador declare variáveis 
que irão receber valores internos de um array ou structure/classe. 
O número de variáveis deve ser compatível com os elementos internos 
da expressão do lado direito. */

#include <iostream>
#include <string>

using namespace std;

struct Data {
  int dia;
  string mes;
  int ano;
};

int main() {
  int tab[] = { 1, 3, 5 };
  Data hoje{ 8, "Outubro", 2018 };
  auto [ a, b, c ] = tab; // Cada variavel vai receber valores internos do array
  auto [ dia, mes, ano ] = hoje;
  
  cout << tab[0] << endl << endl;
  cout << a << endl;
  cout << b << endl;
  cout << c << endl;
  
  cout << dia << endl;
  cout << mes + "!" << endl;
  cout << ano << endl;
 
  return 0;
}