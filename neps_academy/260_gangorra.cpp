#include <iostream>
using namespace std;
int main(){
    int p1,c1,p2,c2; cin >> p1 >> c1 >> p2 >> c2;
    int l1 = p1 * c1, l2 = p2 * c2, r = 1;
    if(l1 == l2) r -= 1;
    else if(l1 > l2) r *= -1;
    cout << r << endl;
}