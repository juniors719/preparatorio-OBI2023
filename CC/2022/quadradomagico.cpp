#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int quad[n][n];
    int lin = n+1, col = n+1;
    for(int l = 0; l < n; l++){
        for(int c = 0; c < n; c++){
            cin >> quad[l][c];
            if(quad[l][c] == 0){
                lin = l;
                col = c;
            }
        }
    }
    int soma1 = 0;
    int soma2 = 0;
    int v = (lin == 0)? 1 : -1;
    for(int c = 0; c < n; c++){
        soma1 += quad[lin+v][c];
        soma2 += quad[lin][c];
    }
    cout << soma1 - soma2 << endl << lin+1 << endl << col+1 << endl;
}