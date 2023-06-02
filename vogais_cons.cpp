#include <bits/stdc++.h>
using namespace std;
int main(){
    string entrada; cin >> entrada;
    unordered_set<char> vogais = {'a', 'e', 'i', 'o', 'u'};
    string saida_vogais = "";
    string saida_cons = "";
    for(char i : entrada){
        if(vogais.find(i) != vogais.end()) saida_vogais += i;
        else saida_cons += i;
    }

    cout << "Vogais: " << saida_vogais << endl;
    cout << "Consoantes: " << saida_cons << endl;
}