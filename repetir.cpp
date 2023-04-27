#include <iostream>
using namespace std;
int main(){
    int quant, n;
    cin >> quant;
    while(quant--){
        cin >> n;
        if(n==0){
            cout << "NULL\n";
        }else{
            if(n%2==0)
                cout << "EVEN ";
            else
                cout << "ODD ";
            if(n>0)
                cout << "POSITIVO\n";
            else
                cout << "NEGATIVE\n";
        }
    }
}