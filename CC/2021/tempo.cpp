#include <iostream>
#include <vector>
using namespace std;

int get_index(vector<int> vet, int valor){
    for(int i = 0; i < vet.size(); i++) if(valor == vet[i]) return i;
    return -1;
}

int main(){
    int n, amigo, index, t; cin >> n;
    vector<int> amigos;
    vector<int> tempo;
    string registro;
    for(int i = 0; i < n; i++){
        cin >> registro;
        switch (registro[0]){
            default:
                // cout << "Recebido" << endl;
                amigo = registro[2] - 0;
                index = get_index(amigos, amigo);
                if(index < 0){
                    amigos.push_back(amigo);
                    tempo.push_back(1);
                }else tempo[index]++;
                break;
            case 'T':
                t = registro[2] - 0;
                for(int j = 0; j < tempo.size(); j++) tempo[j]+=t;
                break;
        }
        for(int k = 0; k < amigos.size(); k++) cout << "Saída: " << amigos[k] << " " << tempo[k] << endl;
    }
    // for(int i = 0; i < amigos.size(); i++) cout << amigos[i] << " " << tempo[i] << endl;

}