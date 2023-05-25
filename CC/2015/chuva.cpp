#include <iostream>
using namespace std;
int main(){
    int n, m; cin >> n >> m;
    char matriz[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> matriz[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = m-1; j >= 0; j--){
            if(matriz[i][j] == '.' && ((matriz[i-1][j] == 'o') || ((matriz[i][j-1] == 'o') && (matriz[i+1][j-1] == '#')) ||  ((matriz[i][j+1] == 'o') && (matriz[i+1][j+1] == '#')))){
                matriz[i][j] = 'o';
            }
        }
        for(int j = 0; j < m; j++){
            if(matriz[i][j] == '.' && ((matriz[i-1][j] == 'o') || ((matriz[i][j-1] == 'o') && (matriz[i+1][j-1] == '#')) ||  ((matriz[i][j+1] == 'o') && (matriz[i+1][j+1] == '#')))){
                matriz[i][j] = 'o';
            }
            cout << matriz[i][j];
        }
        cout << endl;
    }
}