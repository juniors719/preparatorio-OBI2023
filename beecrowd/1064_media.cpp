// Leia 6 valores. Em seguida, mostre quantos destes valores digitados foram positivos. 
// Na próxima linha, deve-se mostrar a média de todos os valores positivos digitados, 
// com um dígito após o ponto decimal.

// Entrada
// A entrada contém 6 números que podem ser valores inteiros ou de ponto flutuante. 
// Pelo menos um destes números será positivo.

// Saída
// O primeiro valor de saída é a quantidade de valores positivos. 
// A próxima linha deve mostrar a média dos valores positivos digitados.

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int q = 0;
    double n, soma = 0;
    for(int i = 0; i < 6; i++){
        cin >> n;
        if(n > 0){
            soma+=n;
            q++;
        }
    }
    cout << q << " valores positivos" << endl;
    cout << fixed << setprecision(1) << soma/q << endl;
}