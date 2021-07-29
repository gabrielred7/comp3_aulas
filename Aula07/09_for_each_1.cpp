// for each

/* No arquivo <algorithm> temos várias funções 
para manipular coleções, dentre elas o for_each, 
que recebe dois iterators (inicio e fim) e 
aplica uma função nos elementos do intervalo: */

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template<typename InputIterator, typename Function>

Function for_each(InputIterator first, InputIterator last, Function f){
  while (first != last) {
    f(*first);
    ++first;
  }
  return f;      // or, since C++11: return move(fn);
}

void f( int x ) {
  cout << x * x << endl;
}

int main() {
  vector<int> v;

  v.push_back( 3 );
  v.push_back( 7 );
  v.push_back( 11 );
  v.push_back( 13 );
  
  for_each( v.begin(), v.end(), f);
}