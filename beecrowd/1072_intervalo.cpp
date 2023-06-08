#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, in=0, out=0; cin >> n;
    for(int i = 0; i < n; i++){
        int aux; cin >> aux;
        if(aux >= 10 && aux <= 20) in++;
        else out++;
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}