#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<char> abre_chaves;
    stack<char> fecha_chaves;
    string linha;
    int num_linhas; cin >> num_linhas;
    cin.ignore();
    for(int i = 0; i < num_linhas; i++){
        getline(cin, linha);
        for(int j = 0; j < linha.size(); j++){
            if(linha[j] == '{') abre_chaves.push(linha[j]);
            else if(linha[j] == '}' && !abre_chaves.empty()) abre_chaves.pop();
            else if(linha[j] == '}' && abre_chaves.empty()){
                cout << 'N' << endl;
                return 0;
            }
        }
    }
    if(abre_chaves.empty()) cout << 'S' << endl;
    else cout << 'N' << endl;
    return 0;
}