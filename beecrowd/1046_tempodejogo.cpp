    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int h1, h2; cin >> h1 >> h2;
        if(h1 == h2) cout << "O JOGO DUROU 24 HORA(S)" << endl;
        else if(h1 > h2) cout << "O JOGO DUROU " << 24 - h1 + h2 << " HORA(S)" << endl;
        else cout << "O JOGO DUROU " << h2 - h1 << " HORA(S)" << endl;
    }