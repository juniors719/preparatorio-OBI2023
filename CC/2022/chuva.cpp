#include <iostream>
using namespace std;
int main(){
    int n, s, q = 0, soma, aux; cin >> n >> s;
    int vetor[n];
    for(int i = 0; i < n; i++) cin >> vetor[i];
    // for(int i = 0; i < n; i++){
    //     int soma = 0;
    //     for(int j = i; j < n; j++){
    //         if((soma + vetor[j]) > s) break;
    //         else if((soma + vetor[j]) < s) soma+=vetor[j];
    //         else{
    //             q++;
    //             break;
    //         }
    //     }
    // }
    // int i = 1;
    // int total = 0;
    // for(int j = 0; j < n && i < n; j++){
    //     total+=vetor[j];
    //     soma = 0;
    //     for(int k = 1; k <= i; k++){
    //         soma+=vetor[k];
    //         if(soma == s || total == s){
    //             q++;
    //             break;
    //         }else if(soma > s) break;
    //     }
    //     if(j==(n-1)) i++;
    // }

    int p1 = 0, p2 = 0;
    while(p1 <= n && p2 <= n){
        soma = 0;
        if(p1==p2) soma = vetor[p1];
        else{
            for(int i = p1; i <= p2; i++) soma+=vetor[i];
        }
        if(soma < s) p2++;
        else if(soma > s) p1++;
        else{
            q++;
            p1++;
        }
    }


    cout << q << endl;
}