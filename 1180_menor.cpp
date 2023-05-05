#include <iostream>
using namespace std;
int main(){
    int q, menor = 0;
    cin >> q;
    int v[q];
    for(int i = 0; i < q; i++){
        cin >> v[i];
        if(i > 0 && v[i] < v[menor]) menor = i;
    }
    cout << "Menor valor: " << v[menor] << endl << "Posicao: " << menor << endl;
}