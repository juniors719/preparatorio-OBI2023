    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        set<int> tacos;
        int n, pedido, quant_tacos = 0; cin >> n;
        while (n--){
            cin >> pedido;
            if(tacos.find(pedido) == tacos.end()){
                quant_tacos += 2;
                tacos.insert(pedido);
            }else tacos.erase(pedido);
        }
        cout << quant_tacos << endl;
    }