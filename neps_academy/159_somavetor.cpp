// #include <iostream>
// using namespace std;

// void le_vet(int v[], int n){
//     for(int i=0; i<n; i++){
//         cin >> v[i];
//     }
// }

// int soma_vetor(int v[], int n){
//     int soma = 0;
//     for(int i=0; i<n; i++){
//         soma += v[i];
//     }
//     return soma;
// }

// int main(){
//     int n; cin >> n;
//     int vetor[n];
//     le_vet(vetor, n);
//     cout << soma_vetor(vetor, n) << endl;
// }

#include <iostream>

using namespace std;

int soma_vet(int v[], int n){
 	int vari = 0;
	for(int i = 0; i < n; i++){
	    vari += v[i];
	}
	return vari;
}

int main(){
	int n;
	int vet[n];
	
	cin >> n;
    
	for(int i = 0; i < n; i++){
	    cin >> vet[i];
	}
	
	cout << soma_vet(vet, n) << endl;
    return 0;
}