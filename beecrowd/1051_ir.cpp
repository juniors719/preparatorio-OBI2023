#include <bits/stdc++.h>
using namespace std;
int main(){
    double renda; cin >> renda;
    float percent = 0;
    if(renda > 2000 and renda <= 3000) percent = 8;
    else if(renda > 3000 and renda <= 4500) percent = 18;
    else percent = 28;
    if(percent > 0) cout << fixed << setprecision(2) << "R$ " << (renda - 2000) * (percent/100) << endl;
    else cout << "Isento" << endl;
}