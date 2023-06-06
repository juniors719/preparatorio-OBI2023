#include <bits/stdc++.h>
using namespace std;
int main(){
    int qPositivos = 0;
    for(int i = 0; i < 6; i++){
        float n; cin >> n;
        if(n>0) qPositivos++;
    }
    cout << qPositivos << " valores positivos" << endl;
}