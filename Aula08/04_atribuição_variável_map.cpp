// Atribuição de mais de uma variável (structured binding declarations)

/* Além disso, é útil para percorrer maps */

#include <iostream>
#include <string>
#include <map>
#include <tuple>

using namespace std;

int main() {
  map<string, string> pronomes{ 
      { "I", "eu" }, 
      { "you", "tu" }, 
      { "he", "ele"} 
    };
  
  for( auto [ ingles, portugues ] : pronomes ){
      cout << ingles << " => " << portugues << endl;
  }
  
  return 0;
}