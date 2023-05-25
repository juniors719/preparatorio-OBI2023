#include <iostream>
using namespace std;
int main(){
    int n, saida; cin >> n;
    int res = (n - 5)%8;
    if(res <= 1 or res > 3) saida = 1;
    else if(res == 2) saida = 2;
    else if(res == 3) saida = 3;
    cout << saida << endl;
}

// Tempo de execução = 07:21