#include <bits/stdc++.h>
using namespace std;
int main(){
    string animais[8] = {"aguia","pomba","homem","vaca","pulga","lagarta","sanguessuga","minhoca"};
    int res;
    string id1, id2, id3; cin >> id1 >> id2 >> id3;
    if(id1 == "vertebrado"){
        if(id2 == "ave"){
            if(id3 == "carnivoro") res = 0;
            else res = 1;
        }else{
            if(id3 == "onivoro") res = 2;
            else res = 3;
        }
    }else{
        if(id2 == "inseto"){
            if(id3 == "hematofago") res = 4;
            else res = 5;
        }else{
            if(id3 == "hematofago") res = 6;
            else res = 7;
        }
    }
    cout << animais[res] << endl;
}