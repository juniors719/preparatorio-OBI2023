#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, aux; cin >> n;
	set<int> presenca;
	for(int i = 0; i < n; i++){
		cin >> aux;
		presenca.insert(aux);
	}
    cout << presenca.size() << endl;
    return 0;
}
