#include <bits/stdc++.h>
using namespace std;
int main(){
    int init = 7;
    for(int i = 1; i <= 9; i+=2){
        for(int j = init; j >= (init - 2); j--){
            cout << "I=" << i << " J=" << j << endl;
        }
        init+=2;
    }
}