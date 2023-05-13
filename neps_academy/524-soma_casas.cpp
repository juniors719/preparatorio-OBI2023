#include <iostream>

using namespace std;

int main(){
    // lendos os valores
    int n; cin >> n;
    int casas[n];
    for(int i = 0; i < n; i++) cin >> casas[i];
    int k; cin >> k;

    // // utilizando 2 for's
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         if(casas[i] + casas[j] == k){
    //             cout << casas[i] << " " << casas[j] << endl;
    //             return 0;
    //         }
    //     }
    // }

    // // utilizando binary search
    // for(int i = 0; i <= k/2; i++){
    //     int valor_buscado = k - casas[i];
    //     int p1 = 0, p2 = n - 1;
    //     while(p1 <= p2){
    //         int mid = (p1+p2)/2;
    //         if(casas[mid] == valor_buscado){
    //             cout << casas[i] << " " << casas[mid] << endl;
    //             return false;
    //         }
    //         if(casas[mid] < valor_buscado){
    //             p1 = mid + 1;
    //         }
    //         if(casas[mid] > valor_buscado){
    //             p2 = mid - 1;
    //         }
    //     }
    // }

    // utilizando dois ponteiros
    int p1 = 0, p2 = n - 1, soma = 0;
    do{
        soma = casas[p1] + casas[p2];
        if(soma < k) p1++;
        else if(soma > k) p2--;
        else{
            cout << casas[p1] << " " << casas[p2] << endl;
        }
    }while(p1 < p2 && soma != k);

}