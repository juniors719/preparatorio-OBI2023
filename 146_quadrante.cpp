#include <iostream>
using namespace std;

string quad(int x, int y){
    if(x > 0){
        if(y > 0) return "Q1";
        else if(y < 0) return "Q4";
        else return "eixos";
    }else if(x < 0){
        if(y > 0) return "Q2";
        else if(y < 0) return "Q3";
        else return "eixos";
    }else{
        return "eixos";
    }
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << quad(x,y) << endl;
    return 0;
}