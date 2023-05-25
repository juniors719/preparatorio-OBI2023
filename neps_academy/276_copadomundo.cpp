#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<char> times;
    char time1, time2;
    int res1, res2;
    for(int i = 'A'; i <= 'P'; i++) times.push(i);
    while(times.size() > 1){
        time1 = times.front();
        times.pop();
        time2 = times.front();
        times.pop();
        cin >> res1 >> res2;
        if(res1 > res2) times.push(time1);
        else times.push(time2);
    }
    cout << times.front() << endl;
    
}