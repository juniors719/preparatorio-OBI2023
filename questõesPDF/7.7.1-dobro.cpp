#include <iostream>
using namespace std;
int dobro(int n){
    return n*2;
}
int main(){
    for(int i=0; i < 3; i++){
        int x; cin >> x;
        cout << dobro(x) << endl;
    }
}