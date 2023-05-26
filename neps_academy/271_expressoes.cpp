#include <iostream>
#include <stack>
#include <vector>
using namespace std;

void zeraStack(stack<char> stack){
    while(!stack.empty()) stack.pop();
}

int main(){
    int n, flag; cin >> n;
    string leitura;
    stack<char> cadeia;
    vector<int> saida;
    for(int i = 0; i < n; i++){
        cin >> leitura;
        for(int j = 0; j < leitura.size(); j++){
            zeraStack(cadeia);
            flag = 1;
            if(leitura[j] == '{' || leitura[j] == '[' || leitura[j] == '(') cadeia.push(leitura[j]);
            else if((cadeia.empty() && leitura[j] == '}') || (cadeia.empty() && leitura[j] == ']') || (cadeia.empty() && leitura[j] == ')')) flag = 0;
            else{
                if(leitura[j] == '}' && cadeia.top() == '{') cadeia.pop();
                else if(leitura[j] == ']' && cadeia.top() == '[') cadeia.pop();
                else if(leitura[j] == ')' && cadeia.top() == '(') cadeia.pop();
                else flag = 0;
            }
            saida[i] = flag;
        }
    }
    for(int i = 0; i < saida.size(); i++){
        if(saida[i]) cout << 'S' << endl;
        else cout << 'N' << endl;
    }
}