#include <iostream>
#include <string>

using namespace std;

int main(){
    int senha;
    // while(1){
    //     cin >> senha;
    //     if(senha == 2002){
    //         cout << "Acesso Permitido" << endl;
    //         break;
    //     }
    //     cout << "Senha invalida" << endl;
    // }

    while ((cin >> senha) && senha != 2002){
        cout << "Senha invalida" << endl;
    }
    cout << "Acesso Permitido" << endl;
    
}