// Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, 
// de modo que o lado A representa o maior dos 3 lados. 
// A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, 
// sempre escrevendo uma mensagem adequada:
//     se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
//     se A² = B² + C², apresente a mensagem: TRIANGULO RETANGULO
//     se A² > B² + C², apresente a mensagem: TRIANGULO OBTUSANGULO
//     se A² < B² + C², apresente a mensagem: TRIANGULO ACUTANGULO
//     se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
//     se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

#include <iostream>
#include <cmath>

using namespace std;

int main(){
    // ordena os valores;
    double a = 0, b = 0, c = 0;
    for(int i = 0; i < 3; i++){
        double n; cin >> n;
        if(n > a){
            swap(c, b);
            swap(b, a);
            a = n;
        }else if(n > b){
            swap(c, b);
            b = n;
        }else{
            c = n;
        }
    }

    if(!(a >= (b + c))){
        double aq = pow(a,2);
        double bq = pow(b,2);
        double cq = pow(c,2);
        if(aq == (bq + cq))
            cout << "TRIANGULO RETANGULO" << endl;
        else if(aq > (bq + cq))
            cout << "TRIANGULO OBTUSANGULO" << endl;
        else
            cout << "TRIANGULO ACUTANGULO" << endl;
        
        if(a == b && a == c)
            cout << "TRIANGULO EQUILATERO" << endl;
        else if(a == b || a == c || b == c)
            cout << "TRIANGULO ISOSCELES" << endl;
    }else{
        cout << "NAO FORMA TRIANGULO" << endl;
    }

}