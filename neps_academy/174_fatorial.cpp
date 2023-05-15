#include <iostream>

// usando funções recursivas

using namespace std;

long int fatorial(int n){
    if(n == 0 || n == 1)
        return true;
    else
        return n * fatorial(n-1);
}

int main(){
    int n; cin >> n;
    cout << fatorial(n) << endl;
}
