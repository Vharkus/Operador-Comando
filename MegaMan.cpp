//Bibliotecas padr�es
#include <iostring>
#include <string>
//Evita a repeti��o de "std::"
using namespace std;
int main() {
    //Declara��o das diferentes variaveis.
    int life;
    int energy;
    bool status;
    string character;
    //Defini��o dos valores das variaveis.
    life = 5;
    energy = 99.99f;
    status = true;
    character = "Mega Man";
    
    //Ir� mostrar o valor definido na vari�vel.
    cout << life << endl;
    //Vai mostrar o valor definido na vari�vel.
    cout << energy << endl;
    //Ir� mostrar o n�mero 1 pois "true" vale 1, se fosse "false" iria mostrar 0.
    cout << status << endl;
    //Vai mostrar o nome, pois definimos l� atr�s com ""
    cout << character << endl;
    return 0;
}