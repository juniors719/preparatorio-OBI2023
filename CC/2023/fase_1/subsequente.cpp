#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    bool flag;
    vector<int> major;
    vector<int> minor;
    for(int i = 0; i < n; i++){
        int aux; cin >> aux;
        major.emplace_back(aux);
    }
    for(int i = 0; i < m; i++){
        int aux; cin >> aux;
        minor.emplace_back(aux);
    }
    int init = 0;
    for(int i : minor){
        for(int j = init; j < major.size(); j++){
            if(i == major[j]){
                init = j + 1;
                flag = true;
                break;
            }
            flag = false;
        }
        if(!flag){
            cout << "N" << endl;
            return 0;
        }
    }
    cout << "S" << endl;
    return 0;
}