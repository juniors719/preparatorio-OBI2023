#include <iostream>
using namespace std;
int main(){
    int n; cin >> n;
    int seq[n];
    for(int i = 0; i < n; i++) cin >> seq[i]; 
    int contagem {};
    for(int i = 0; i < n - 2; i++){
        if(seq[i] == 1){
            if(seq[i+1] == 0){
                if(seq[i+2] == 0){
                    contagem++;
                }
            }
        }
    }
    cout << contagem << endl;
}