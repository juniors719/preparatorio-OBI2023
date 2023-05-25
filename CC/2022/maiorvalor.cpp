#include <iostream>
using namespace std;
int main(){
    int n, m, s; cin >> n >> m >> s;
    for(int i = m; i >= n; i--){
        int teste = i;
        int soma = 0;
        while(teste > 0){
            soma += teste % 10;
            teste /= 10;
        }
        if(soma == s){
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}