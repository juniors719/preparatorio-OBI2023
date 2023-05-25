#include <iostream>
using namespace std;
int main(){
    int numero, p = 2; cin >> numero;
    int quant_divisores = 1;
    int aux;
    while(numero>1){
        aux = 0;
        while(numero % p == 0){
            numero /= p;
            aux++;
        }
        if(aux > 0) quant_divisores *= (aux + 1);
        p++;
    }
    cout << quant_divisores << endl;
}