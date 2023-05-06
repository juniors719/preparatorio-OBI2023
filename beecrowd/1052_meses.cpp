#include <iostream>
 
using namespace std;
 
int main() {
    int n = 0;
    string meses[12] = {
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    cin >> n;
    cout << meses[n-1] << endl;
    return 0;
}