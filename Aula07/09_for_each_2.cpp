// for each pt. 2

/* Podemos usar também um Functor (normalmente mais eficiente).*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class PrintSqr {
public:
  PrintSqr( ostream& o ): o(o) {}
  
  void operator() ( int x ) {
    o << x * x << endl;
  }
  
private:
  ostream& o;
};

int main() {
  vector<int> v;

  v.push_back( 3 );
  v.push_back( 7 );
  v.push_back( 11 );
  v.push_back( 13 );
  
  for_each( v.begin(), v.end(), PrintSqr( cerr ) );
}