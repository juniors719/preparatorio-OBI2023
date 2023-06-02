#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
    vector<pair<int, int>> pecas;
    vector<char> letras;
    string saida = "";
    int n; cin >> n;
    vector<int> usado(n, false);

    for (int i = 0; i < n; i++) {
        char letra;
        int a, b;
        cin >> a >> letra >> b;
        pecas.emplace_back(a, b);
        letras.emplace_back(letra);
    }

    int init = 0;
    unordered_map<int, int> pecasEsquerdas;

    for (int i = 0; i < n; i++) {
        pecasEsquerdas[pecas[i].first] = i;
    }

    for (int i = 0; i < n; i++) {
        int j = pecasEsquerdas[init];
        if (j == -1) {
            break;
        }
        saida += letras[j];
        init = pecas[j].second;
        pecasEsquerdas[pecas[j].first] = -1;
    }

    cout << saida << endl;
    return 0;
}
