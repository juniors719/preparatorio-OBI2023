#include <iostream>

using namespace std;

int main(){
    int n[3][3];
	for(int l=0;l<3;l++){
        for(int c=0;c<3;c++){
            cin >> n[l][c];
        }
    }
    for(int l=0;l<3;l++){
        int soma = 0;
        for(int c=0;c<3;c++){
            soma += n[l][c];
        }
        cout << "Linha " << l << ": " << soma << endl;
    }
    return 0;
}
