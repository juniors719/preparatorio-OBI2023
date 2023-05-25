#include <iostream>
using namespace std;
string options[] = {"oitavas", "quartas", "semifinal", "final"};
int main(){
    int k, l; cin >> k >> l;
    int c = 0;
    while(k != l){
        if(k%2==0) k /= 2;
        else ++k /= 2;
        if(l%2==0) l /= 2;
        else ++l /= 2;
        c++;
    }
    cout << options[c-1] << endl;
}