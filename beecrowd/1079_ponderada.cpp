#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        double n1, n2, n3, res; cin >> n1 >> n2 >> n3;
        res = ((n1 * 2) + (n2 * 3) + (n3 * 5))/10;
        cout << fixed << setprecision(1) << res << endl;
    }
}