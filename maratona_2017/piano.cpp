#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    int ac1, ac2, f, maiorFrequencia, maisFrequente;
    vector<int> piano(n, 1);
    for(int i = 0; i < q; i++){
        maiorFrequencia = 0;
        cin >> ac1 >> ac2;
        for(int j = ac1; j <= ac2; j++){
            f = 0;
            for(int k = ac1; k <= ac2; k++){
                if(piano[j] == piano[k]) f++;
            }
            if(f > maiorFrequencia){
                maiorFrequencia = f;
                maisFrequente = piano[j];
            }
        }
        for(int j = ac1; j <= ac2; j++){
            piano[j] = (piano[j] + maisFrequente)%9;
        }
    }

    for(int i = 0; i < n; i++) cout << piano[i] << endl;

}