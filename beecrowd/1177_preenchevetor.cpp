#include <iostream>
 
using namespace std;
 
int main() {
    int v[1000], n, p = 0;
    cin >> n;
    for(int i = 0; i < 1000; i++){
        v[i] = p++;
        if(p == n) p = 0;
    }
    for(int i = 0; i < 1000; i++){
        cout << "N[" << i << "] = " << v[i] << endl;
    }
    return 0;
}