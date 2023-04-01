//Biblioteca padr�o.
#include <iostream>
//Serva para precisarmos escrever "std::" na frente de cada "cout/cin"
using namespace std;

int main () {
    //Defini��o das vari�veis X e Y.
    int x = 10;
    int y = 20;
    //Condi��o que usa o operador relacional maior(>). Se X > Y ela ser� cumprida.
    if (x > y) {
        //Interface que ir� aparecer caso a variavel X seja maior que Y.
        cout << "X � maior que Y" << endl;
    }
    //Condi��o feita usando o operador menor(<) para descobrir se X � menor que Y.
    if (x < y) {
        //Mensagem que s� aparece se a condi��o for cumprida.
        cout << "X � menor que Y" << endl;
    }
    //Uso do operador maior igual(>=), ou seja, � NECESS�RIO que X seja igual ou maior que y para funcionar. Tecnicamente, duas condi��es em uma. 
    if (x >= y) {
        //Se os numeros forem pelo menos iguais est� mensagem ir� aparecer.
        cout << "X � maior ou igual a Y" << endl;
    }
    //Uso do operador menor igual (<=). Uso semelhante ao maior igual, mas dessa vez precisa ser no maximo igual.
    if (x <= y) {
        //Interface para caso o numero seja menor ou no maximo igual ao outro.
        cout << "X � menor ou igual a Y" << endl;
    }
    //O uso de (==) pede que as variaveis sejam iguais, caso contr�rio n�o funcionar�.
    if (x == y) {
        //Toda vez que os numeros foram iguais esta mensagem vai aparecer.
        cout << "X � igual a Y" << endl;
    }
    //Condi��o que exige os n�meros serem diferentes para funcionar.
    if (x != y) {
        //Mensagem que confirma que x e y s�o diferentes.
        cout << "X � diferente de Y" << endl;
    }
    
    return 0;
}