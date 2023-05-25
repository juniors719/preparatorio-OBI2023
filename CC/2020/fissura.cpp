#include <iostream>
#include <string>
using namespace std;

int main(){
    int n, f, procurado; cin >> n >> f;
    string terreno[n];
    for(int l = 0; l < n; l++) cin >> terreno[l];

    int pL = 0, pC = 0, count = 0;
    while(true){
        if(!count){
            if(terreno[pL][pC] <= f){
                terreno[pL][pC] = '*';
                continue;
            }else break;
        }
        
    }
    cout << procurado << endl;
}