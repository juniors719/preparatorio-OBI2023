// Pedrinho está organizando um evento em sua Universidade. O evento deverá ser no mês de Abril, iniciando e terminando dentro do mês. O problema é que Pedrinho quer calcular o tempo que o evento vai durar, uma vez que ele sabe quando inicia e quando termina o evento.

// Sabendo que o evento pode durar de poucos segundos a vários dias, você deverá ajudar Pedrinho a calcular a duração deste evento.

// Entrada
// Como entrada, na primeira linha vai haver a descrição “Dia”, seguido de um espaço e o dia do mês no qual o evento vai começar. Na linha seguinte, será informado o momento no qual o evento vai iniciar, no formato hh : mm : ss. Na terceira e quarta linha de entrada haverá outra informação no mesmo formato das duas primeiras linhas, indicando o término do evento.

// Saída
// Na saída, deve ser apresentada a duração do evento, no seguinte formato:

// W dia(s)
// X hora(s)
// Y minuto(s)
// Z segundo(s)

// Obs: Considere que o evento do caso de teste para o problema tem duração mínima de 1 minuto.

// Exemplo de Entrada

// Dia 5	
// 08 : 12 : 23
// Dia 9
// 06 : 13 : 23

// Exemplo de Saída

// 3 dia(s)
// 22 hora(s)
// 1 minuto(s)
// 0 segundo(s)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int diaInicio, diaFim, horaInicio, horaFim, minutoInicio, minutoFim, segundoInicio, segundoFim;
    string dia;
    cin >> dia >> diaInicio;
    cin >> horaInicio >> dia >> minutoInicio >> dia >> segundoInicio;
    cin >> dia >> diaFim;
    cin >> horaFim >> dia >> minutoFim >> dia >> segundoFim;
    int duracaoSegundos = segundoFim - segundoInicio;
    int duracaoMinutos = minutoFim - minutoInicio;
    int duracaoHoras = horaFim - horaInicio;
    int duracaoDias = diaFim - diaInicio;
    if(duracaoSegundos < 0){
        duracaoSegundos += 60;
        duracaoMinutos--;
    }
    if(duracaoMinutos < 0){
        duracaoMinutos += 60;
        duracaoHoras--;
    }
    if(duracaoHoras < 0){
        duracaoHoras += 24;
        duracaoDias--;
    }
    cout << duracaoDias << " dia(s)" << endl;
    cout << duracaoHoras << " hora(s)" << endl;
    cout << duracaoMinutos << " minuto(s)" << endl;
    cout << duracaoSegundos << " segundo(s)" << endl;
}