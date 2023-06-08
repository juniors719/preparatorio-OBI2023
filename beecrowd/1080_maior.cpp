#include <bits/stdc++.h>
using namespace std;
int main(){
    int maior = 0;
    int p = 0;
    for(int i = 0; i < 100; i++){
        int leitura; cin >> leitura;
        if(leitura > maior){
            maior = leitura;
            p = i+1;
        }
    }
    cout << maior << endl << p << endl;
}