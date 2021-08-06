#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v = {5, 6, 7, 8};

    for (int i = 0; i < 200; i++){
        cout << v.size() << "/" << v.capacity() << endl;
        v.push_back(i);
    }
    
    for (vector<int> :: value_type x : v){ //value_type é para se ter certeza do tipo
        cout << x << " ";
    }
}