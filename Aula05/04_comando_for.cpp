#include <iostream>

using namespace std;

int main(){
    int tab1[] = {1, 2, 3};
    for( auto x : tab1){
        cout << x << endl;
    }
    cout << endl;
    int tab2[5] = {1, 2, 3};
    for( auto& x : tab2){ // o & altera o array original
        x = 0;
        cout << x << endl;
    }
    cout << endl;
    double tab3[] = {1, 2.1, 3};
    for( auto x : tab3){
        x = x * 1.5;
        cout << x << endl;
    }
    cout << "Array original" << endl;
    for (auto x : tab3){
        cout << x << endl;
    }
    return 0;
}
