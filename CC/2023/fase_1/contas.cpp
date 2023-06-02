#include <bits/stdc++.h>
using namespace std;
int main(){
    int v, a, f, p, total = 3; cin >> v >> a >> f >> p;
    if(v >= a + f + p) total -= 0;
    else if((v >= a + f) || (v >= a + p) || (v >= p + f)) total -= 1;
    else if((v >= a)||(v >= f)||(v >= p)) total -= 2;
    else total -= 3;
    cout << total << endl;
}