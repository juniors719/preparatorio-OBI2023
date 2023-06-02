#include <bits/stdc++.h>
using namespace std;
int main(){
    int l, c; cin >> l >> c;
    int lajotasTipo1, lajotasTipo2;
    // tipo 1
    lajotasTipo1 = l * c + ((l - 1) * (c - 1));
    // tipo 2
    lajotasTipo2 = ((l-1)*2)+((c-1)*2);

    cout << lajotasTipo1 << endl << lajotasTipo2 << endl;
}