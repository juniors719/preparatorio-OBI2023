#include <iostream>
using namespace std;
int main(){
    int n; cin >> n; int seq[n]; 
    for(int i = 0; i < n; i++) cin >> seq[i];

    // insertion sort
    for(int i = 1; i < n; i++){
        int key = seq[i];
        int j = i - 1;
        if(j >= 0 && key < seq[j]){
            seq[j+1] = seq[j];
            j--;
        }
        seq[j+1] = key;
    }

    for(int i = 0; i < n; i++){
        cout << seq[i];
        if(i != (n - 1)) cout << " ";
    } 
    cout << endl;
    return 0;
}