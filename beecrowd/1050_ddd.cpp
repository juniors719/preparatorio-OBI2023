#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> ddd = {61, 71, 11, 21, 32, 19, 27, 31};
    vector<string> cidade = {"Brasilia", "Salvador", "Sao Paulo", "Rio de Janeiro", "Juiz de Fora", "Campinas", "Vitoria", "Belo Horizonte", "DDD nao cadastrado"};
    int leituraDDD, id = 8; cin >> leituraDDD;
    for(int i = 0; i < ddd.size(); i++){
        if(leituraDDD == ddd[i]){
            id = i;
            break;
        }
    }
    cout << cidade[id] << endl;
}