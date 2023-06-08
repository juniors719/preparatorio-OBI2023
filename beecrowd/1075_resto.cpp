    #include <bits/stdc++.h>
    using namespace std;
    int main(){
        int n; cin >> n;
        for(int i = 1; i <= 10000; i++){
            if(i % n == 2){
                while(i <= 10000){
                    cout << i << endl;
                    i+=n;
                }
            }
        }
    }