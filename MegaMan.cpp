//Bibliotecas padrões
#include <iostring>
#include <string>
//Evita a repetição de "std::"
using namespace std;
int main() {
    //Declaração das diferentes variaveis.
    int life;
    int energy;
    bool status;
    string character;
    //Definição dos valores das variaveis.
    life = 5;
    energy = 99.99f;
    status = true;
    character = "Mega Man";
    
    //Irá mostrar o valor definido na variável.
    cout << life << endl;
    //Vai mostrar o valor definido na variável.
    cout << energy << endl;
    //Irá mostrar o número 1 pois "true" vale 1, se fosse "false" iria mostrar 0.
    cout << status << endl;
    //Vai mostrar o nome, pois definimos lá atrás com ""
    cout << character << endl;
    return 0;
}