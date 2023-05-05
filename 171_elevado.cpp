#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

long double elevado(double b, double e){
    return pow(b, e);
}

int main(){
    long double b, e; cin >> b >> e;
    cout << fixed << setprecision(4) << elevado(b, e) << endl;
}
