// Um Posto de combustíveis deseja determinar qual de seus produtos tem a preferência de seus clientes. 
// Escreva um algoritmo para ler o tipo de combustível abastecido
// (codificado da seguinte forma: 1.Álcool 2.Gasolina 3.Diesel 4.Fim). 
// Caso o usuário informe um código inválido (fora da faixa de 1 a 4) deve ser solicitado um novo código 
// (até que seja válido). O programa será encerrado quando o código informado for o número 4.

// >> Entrada
// A entrada contém apenas valores inteiros e positivos.

// >> Saída
// Deve ser escrito a mensagem: "MUITO OBRIGADO" 
// e a quantidade de clientes que abasteceram cada tipo de combustível, conforme exemplo.

#include <iostream>
using namespace std;
int main(){
    int n, comb[3] = {0,0,0};
    // int a = 0, g = 0, d = 0;
    // while(n != 4){
    //     switch (n){
    //         case 1: a++; break;
    //         case 2: g++; break;
    //         case 3: d++; break;
    //     }
    //     cin >> n;
    // }
    while(cin >> n && n != 4){
        if(n > 3) continue;
        comb[n-1]++;
    }
    cout << "MUITO OBRIGADO" << endl << "Alcool: " << comb[0] << endl 
    << "Gasolina: " << comb[1] << endl <<  "Diesel: " << comb[2] << endl;
}