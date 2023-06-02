#include <bits/stdc++.h>
using namespace std;
int main(){
    int qTipos, qTamanhos; cin >> qTipos >> qTamanhos;
    int estoque[qTipos][qTamanhos];
    for(int i = 0; i < qTipos; i++){
        for(int j = 0; j < qTamanhos; j++){
            cin >> estoque[i][j];
        }
    }
    int qPedidos; cin >> qPedidos;
    int qVendasEfetuadas = 0;
    for(int i = 0; i < qPedidos; i++){
        int pedidoTipo, pedidoTamanho; cin >> pedidoTipo >> pedidoTamanho;
        if(estoque[pedidoTipo-1][pedidoTamanho-1] > 0){
            qVendasEfetuadas++;
            estoque[pedidoTipo-1][pedidoTamanho-1]--;
        }
    }
    cout << qVendasEfetuadas << endl;
}