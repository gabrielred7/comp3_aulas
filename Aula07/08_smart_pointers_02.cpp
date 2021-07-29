//Smart Pointers

/* Podemos usar com arrays, mas nesse caso é
 aconselhado a se usar std::vector ao inves de
 arrays. */

#include <memory>
#include <iostream>

using namespace std;

int main() {
    int tamanho = 10;
    unique_ptr<int[]> p{ new int[tamanho] };
  
    for (int i = 0; i < tamanho ; i++){
        p[i] = i;
        cout << p[i] << endl;  
    }
  
  cout << p[9] << endl;  
  return 0;
}