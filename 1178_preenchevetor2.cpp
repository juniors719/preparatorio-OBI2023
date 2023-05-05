#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
    double x, v[100];
    cin >> x;
    for(int i = 0; i < 100; i++){
        v[i] = x;
        x /= 2;
        cout << fixed << setprecision(4) << "N[" << i << "] = " << v[i] << endl;
    }
    return 0;
}