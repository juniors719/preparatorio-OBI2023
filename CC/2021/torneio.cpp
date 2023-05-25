#include <iostream>
using namespace std;
int main(){
    int_fast8_t qV = 0;
    for(int8_t i = 0; i < 6; i++){
        char res;
        cin >> res;
        qV = (res=='V')? qV+1 : qV+0;
    }
    if(qV==0) cout << -1 << endl;
    else if(qV>0 && qV<=2) cout << 3 << endl;
    else if(qV>2 && qV<=4) cout << 2 << endl;
    else cout << 1 << endl;
    return 0;
}