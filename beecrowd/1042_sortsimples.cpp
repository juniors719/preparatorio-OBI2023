// Leia 3 valores inteiros e ordene-os em ordem crescente. 
// No final, mostre os valores em ordem crescente, uma linha em branco e em seguida, 
// os valores na sequência como foram lidos.

// Entrada
// A entrada contem três números inteiros.

// Saída
// Imprima a saída conforme foi especificado.

#include <iostream>

using namespace std;

int main(){
    int l[3] = {0,0,0};
    int n[3] = {0,0,0};;
    for(int i = 0; i < 3; i++){
        cin >> n[i];
        if(n[i] >= l[2]){
            swap(l[0], l[1]);
            swap(l[1], l[2]);
            l[2] = n[i];
        }else if(n[i] >= l[1]){
            swap(l[0], l[1]);
            l[1] = n[i];
        }else{
            l[0] = n[i];
        }
    }

    for (int i = 0; i < 3; i++){
        cout << l[i] << endl;
    }
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << n[i] << endl;
    }
    return 0;
}