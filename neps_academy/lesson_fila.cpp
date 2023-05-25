#include <iostream>
#include <vector>
using namespace std;

int search_index(vector<int> x, int valor){
    for(int i = 0; i < (int)x.size(); i++){
        if(x[i] == valor) return i;
    }
    return -1;
}

int main(){
    vector<int> fila;
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int n; cin >> n;
        fila.push_back(n);
    }
    int s; cin >> s;
    for(int i = 0; i < s; i++){
        int saindo; cin >> saindo;
        fila.erase(fila.begin() + search_index(fila, saindo));
    }

    for(int i = 0; i < (int)fila.size(); i++){
        cout << fila[i];
        if(i<(int)fila.size()-1) cout << " ";
    }
    cout << endl;
    return 0;
}