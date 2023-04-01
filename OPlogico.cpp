//Biblioteca padr�o.
#include <iostream>
//Forma de n�o precisarmos escrever "std::" para o c�digo funcionar.
using namespace std;

int main () {
    //Declara��o e defini��o das variaveis. Como tem o sinal de igual os valores ser�o fixos.
    int a = 5;
    int b = 10;
    int c = 15;
    
    //Foi criada uma condi��o onde � necess�rio que A seja menor que B E(&&) que B seja menor que C.
    if (a < b && b < c) {
        //Cumprida a condi��o usando o operador a interface ser� mostrada.
        cout << "A ordem �: a, b, c" << endl;
    }
    
    //Condi��o que aceita uma das respostas: Se A for maior que B OU(||) B for maior que C.
    if (a > b || b > c) {
        //Interface refente a condi��o em quest�o. Ela surge quando a condi��o for cumprida.
        cout << "Pelo menos uma das condi��es � verdadeira" << endl;
    }
    
    //Operador l�gico de nega��o. Se as variaveis N�O(!) forem igual ele ser� ativado.
    if (!(a == b))  {
        //Interface referente a not que comprova que as variaveis n�o s�o iguais. 
        cout << "A � diferente de B" << endl;
    }
    return 0;
}