#include <bits/stdc++.h>
using namespace std;
int main(){
    int qPares = 0, qImpares = 0, qPositivos = 0, qNegativos = 0;
    for(int i = 0; i < 5; i++){
        int n; cin >> n;
        if(n%2 == 0) qPares++;
        else qImpares++;
        if(n > 0) qPositivos++;
        else if(n < 0) qNegativos++;
    }
    cout << qPares << " valor(es) par(es)" << endl;
    cout << qImpares << " valor(es) impar(es)" << endl;
    cout << qPositivos << " valor(es) positivo(s)" << endl;
    cout << qNegativos << " valor(es) negativo(s)" << endl;
}