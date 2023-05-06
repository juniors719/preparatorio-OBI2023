#include <iostream>

using namespace std;

int main(){
    int n;
    int index[2] = {0,0};
    int pares[2][9];
    for(int i = 0; i < 10; i++){
        cin >> n;
        if(n%2==0){
            pares[0][index[0]++] = n;
        }else{
            pares[1][index[1]++] = n;
        }
    }
    for(int l = 0; l < 2; l++){
        for(int c = 0; c < index[l]; c++){
            cout << pares[l][c] << " \n"[index[l] - 1 == c];
        }
    }
    return 0;
}
