#include <bits/stdc++.h>
using namespace std;
int main(){
    int h1, m1, h2, m2; cin >> h1 >> m1 >> h2 >> m2;
    int h, m;
    m = m2 - m1;
    h = h2 - h1;
    if(m <= 0){
        m+=60;
        h--;
    }
    if(m == 60){
        m = 0;
        h+=1;
    }
    if(h <= 0) h+=24;
    if(h == 24 and m > 0) h-=24;
    cout << "O JOGO DUROU " << h << " HORA(S) E " << m << " MINUTO(S)" << endl;
}