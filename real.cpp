#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m, quant = 0; cin >> n >> m;
    vector<int> descendentes(n);
    vector<int> participantes(m);
    vector<int> pais;
    vector<float> porcentagens;
    pais.push_back(0);
    vector<int> filhos;
    for(int i = 0; i < n; i++) cin >> descendentes[i];
    for(int i = 0; i < m; i++) cin >> participantes[i];
    do{
        int filhos_participantes = 0;
        for(int i : pais){
            for(int j = 0; j < n; j++){
                if(i == descendentes[j]){
                    filhos.push_back(j+1);
                    quant++;
                }
            }
        }
        for(int i : filhos){
            for(int j = 0; j < m; j++){
                if(i == participantes[j]) filhos_participantes++;
            }
        }
        porcentagens.push_back((float)filhos_participantes/(float)filhos.size());
        pais.clear();
        for(int i : filhos) pais.push_back(i);
        filhos.clear();
    }while(quant < n);
    
    for(int i = 0; i < porcentagens.size(); i++){
        cout << fixed << setprecision(2) << porcentagens[i]*100;
        if(i != porcentagens.size()-1) cout << " ";
        else cout << endl;
    }
}