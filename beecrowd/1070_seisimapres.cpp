#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    n = (n%2==0) ? n+1 : n;
    for(int i=0; i<6; i++){
        cout << n << endl;
        n += 2;
    }
}