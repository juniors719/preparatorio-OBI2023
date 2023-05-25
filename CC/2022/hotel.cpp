#include <iostream>
using namespace std;
int main(){
    int d, a, data;
    cin >> d >> a >> data;
    int qD = 32 - data;
    data = (data > 15) ? 15 : data;
    d = qD * (d + ((data-1) * a));
    cout << d << endl;
}