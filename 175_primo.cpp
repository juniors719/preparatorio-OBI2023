#include <iostream>
using namespace std;

bool eh_primo(long int n){
    for(int i = 2; i <= n/i; i++)
        if(!(n % i)) return false;
    return true;
}

int main(){
    long int x; cin >> x;
    if(eh_primo(x))
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}