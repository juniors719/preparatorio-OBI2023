#include <bits/stdc++.h>
using namespace std;
int main(){
    int qSalas, qTuneis; cin >> qSalas >> qTuneis;
    vector<pair<int, int>> tuneis;
    vector<int> sequencias;
    int q = 0;
    for(int i = 0; i < qTuneis; i++){
        int sala1, sala2; cin >> sala1 >> sala2;
        tuneis.push_back(make_pair(sala1, sala2));
    }
    int qSugestoes; cin >> qSugestoes;
    int qPossiveis = qSugestoes;
    for(int i = 0; i < qSugestoes; i++){
        int qSequencias; cin >> qSequencias;
        for(int j = 0; j < qSequencias; j++){
            int aux; cin >> aux;
            sequencias.push_back(aux);
        }
        bool flag;
        for(int j = 0; j < sequencias.size() - 1; j++){
            flag = false;
            for(int k = 0; k < tuneis.size(); k++){
                if(sequencias[j] == tuneis[k].first && tuneis[k].second == sequencias[j+1]){
                    flag = true;
                    break;
                }else if(sequencias[j] == tuneis[k].second && tuneis[k].first == sequencias[j+1]){
                    flag = true;
                    break;
                }else flag = false;
            }
            if(!flag){
                qPossiveis--;
                break;
            }
        }
        sequencias.clear();
    }
    cout << qPossiveis << endl;
}