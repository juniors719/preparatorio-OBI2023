#include <iostream>
#include <stack>
using namespace std;
stack<int> seq;
int main(){
    int n, l; cin >> n;
    for(int i = 0; i < n; i++){
        cin >> l;
        if(l) seq.push(l);
        else if(!l and !seq.empty()) seq.pop();
    }
    int sum = 0;
    int len = seq.size();
    for(int i = 0; i < len; i++){
        sum+=seq.top();
        seq.pop();
    }
    cout << sum << endl;
}