#include <iostream>

using namespace std;

int main(){
    int n, d; cin >> n >> d;
    int sand[n];
    for(int i = 0; i < n; i++) cin >> sand[i];
    int res = 0, sum;
    for(int i = 0; i < n; i++){
        sum = 0;
        sum += sand[i];
        int k = i;
        while(sum <= d || k < (n - 1)){
            sum+=sand[++k];
            if(sum == d || (sum + sand[0] + sand[n-1]) == d) res++;
        }
    }
    cout << res << endl;
}