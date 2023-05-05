#include <iostream>
#include <cmath>
using namespace std;

bool eh_primo(int n){
    for(int i = 2; i <= n/i; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int x; cin >> x;
    if(eh_primo(x)){
        cout << "S" << endl;
    }else{
        cout << "N" << endl;
    }
    return 0;
}