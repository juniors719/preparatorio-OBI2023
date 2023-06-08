#include <bits/stdc++.h>
using namespace std;
int main(){
    int q, quantCobaias = 0, quantCoelhos = 0, quantRatos = 0, quantSapos = 0; cin >> q;
    while(q--){
        int quant;
        char animal;
        cin >> quant >> animal;
        quantCobaias += quant;
        switch (animal)
        {
        case 'C':
            quantCoelhos += quant;
            break;
        case 'R':
            quantRatos += quant;
            break;
        case 'S':
            quantSapos += quant;
            break;
        }
    }
    cout << "Total: " << quantCobaias << " cobaias" << endl;
    cout << "Total de coelhos: " << quantCoelhos << endl;
    cout << "Total de ratos: " << quantRatos << endl;
    cout << "Total de sapos: " << quantSapos << endl;
    cout << fixed << setprecision(2) << "Percentual de coelhos: " << (float) quantCoelhos*100/quantCobaias  << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de ratos: " << (float) quantRatos*100/quantCobaias  << " %" << endl;
    cout << fixed << setprecision(2) << "Percentual de sapos: " << (float) quantSapos*100/quantCobaias  << " %" << endl;
}