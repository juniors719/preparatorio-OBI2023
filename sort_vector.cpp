#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vetor = {1,6,3,6,7,4,8,2,5,9};

    // algorithm para sortear

    // int aux, i, j;
    // for(i = 1; i > 0; i--){
    //     for(j = 0; j < i; j++){
    //         if(vetor[j] > vetor[j+1]){
    //             aux = vetor[j];
    //             vetor[j] = vetor[j+1];
    //             vetor[j+1] = aux;
    //         }
    //     }
    // }

    // insertion sort
    int size = vetor.size();
    for(int i = 1; i < size; i++){
        int key = vetor[i];
        int j = i - 1;
        while(j>=0 && vetor[j] > key){
            vetor[j+1] = vetor[j];
            j--;
        }
        vetor[j+1] = key;
    }


    // int aux, h, i, k = 1;
    // for(int h = k; h < vetor.size(); h++){
    //     for(int i = 1; i < vetor.size() - h; i++){
    //         if(vetor[i-1] > vetor[i]){
    //             // algoritmo padrão de troca entre duas posições
    //             
    //         }else{
    //             k = i + 1;
    //             continue;
    //         }
    //         for(int i = 0; i < vetor.size(); i++){
    //             cout << vetor[i] << " ";
    //         }
    //         cout << endl;
    //     }
    // }

    

    // for(int i = 0; i < vetor.size(); i++){
    //     cout << vetor[i] << endl;
    // }

}