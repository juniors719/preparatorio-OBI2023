    #include <iostream>
    using namespace std;
    int main(){
        int n; cin >> n;
        int square[n][n];

        for(int l = 0; l < n; l++){
            for(int c = 0; c < n; c++){
                cin >> square[l][c];
            }
        }

        // // constante para calcular a soma
        // int M = (n*((n*n)+1))/2; 

        int somad1 {}, somad2 {}, somal {}, somac {}, la {}, ca{};
        int dl = 0; int dc = n - 1;
        for(int l = 0; l < n; l++){
            int somal = 0, somac = 0;
            for(int c = 0; c < n; c++){
                somal += square[l][c];
                somac += square[c][l];
            }
            if(l == 0){
                la = somal;
                ca = somac;
            }
            // caso diagonal 1
            somad1 += square[l][l];
            // caso diagonal 2
            somad2 += square[dl][dc];
            dl++;
            dc--;
            if(somal != somac || somal != la || somac != ca){
                cout << -1 << endl;
                return 0;
            }
        }
        if(somad1 != somad2 || somad1 != la || somad2 != la){
            cout << -1 << endl;
            return 0;
        }

        cout << somad1 << endl;
        return 0;

    }