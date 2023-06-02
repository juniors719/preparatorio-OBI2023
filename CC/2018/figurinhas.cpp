#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c, m; cin >> n >> c >> m;
    set<int> carimbadas;
    for(int i = 0; i < c; i++){
        int aux; cin >> aux;
        carimbadas.insert(aux);
    }
    for(int i = 0; i < m; i++){
        int aux; cin >> aux;
        if(carimbadas.find(aux) != carimbadas.end()) carimbadas.erase(aux);
    }
    cout << carimbadas.size();
}