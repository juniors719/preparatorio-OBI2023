#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    int sala[n][m] {0};
    // coloca os armários
    for(int i = 1; i < n; i+=2){
        for(int j = 1; j < m; j+=2){
            sala[i][j] = 1;
        }
    }
    int xe, ye; cin >> xe >> ye;
    int xs, ys; cin >> xs >> ys;

}



// numero de voltas = (n+1)/2
// if xe > xs = para cima && armario abaixo é derrubado
// else para baixo && armario acima é derrubado
// 
