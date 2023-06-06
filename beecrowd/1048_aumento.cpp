#include <bits/stdc++.h>
using namespace std;
int main(){
    double salario; cin >> salario;
    int percentual;
    if(salario <= 400) percentual = 15;
    else if(salario <= 800) percentual = 12;
    else if(salario <= 1200) percentual = 10;
    else if(salario <= 2000) percentual = 7;
    else percentual = 4;
    double novoSalario = salario * ((100 + (float)percentual)/100);
    cout << fixed << setprecision(2) << "Novo salario: " << novoSalario << endl;
    cout << fixed << setprecision(2) << "Reajuste ganho: " << novoSalario - salario << endl;
    cout << "Em percentual: " << percentual << " %" << endl;
}