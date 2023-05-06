// Leia 3 valores reais (A, B e C) e verifique se eles formam ou não um triângulo. 
// Em caso positivo, calcule o perímetro do triângulo e apresente a mensagem:

// Perimetro = XX.X

// Em caso negativo, calcule a área do trapézio que tem A e B como base e C como altura, mostrando a mensagem

// Area = XX.X

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double a, b, c; cin >> a >> b >> c;
    if(a<(b+c) && b<(a+c) && c<(a+b))
        cout << fixed << setprecision(1) << "Perimetro = " << a+b+c << endl;
    else
        cout << fixed << setprecision(1) << "Area = " << ((a+b)*c)/2 << endl;
    
}