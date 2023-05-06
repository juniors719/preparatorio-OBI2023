// Você deve fazer um programa que apresente a sequencia conforme o exemplo abaixo.
// I=1 J=60
// I=4 J=55
// I=7 J=50
// ...
// I=? J=0

#include <iostream>
using namespace std;
int main(){
    int i = 1, j = 60;
    do{
        cout << "I=" << i << " J=" << j << endl;
        i+=3;
        j-=5;
    }while(j >= 0);
    return 0;
}