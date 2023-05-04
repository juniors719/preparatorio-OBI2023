#include <iostream>
 
using namespace std;

int main() {
    int v[20];
    for(int i = 0; i < 20; i++){
        cin >> v[i];
    }
    int p = 19;
    for(int i = 0; i < 10; i++){
        swap(v[i], v[p]);
        p--; 
    }
    for(int i = 0; i < 20; i++){
        cout << "N[" << i << "] = " << v[i] << endl;
    }
}