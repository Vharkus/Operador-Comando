//Biblioteca padr�o.
#include <iostream>
//Evita o uso de "std::"
using namespace std;

int main () {
    //Defini��o das duas vari�veis.
    int num1 = 10, num2 = 4;
    //Declara��o das vari�veis.
    int soma, multi, divi, modulo, subt;
    
    //Definindo a opera��o usando a vari�vel soma para somar os n�meros entre s�.
    soma = num1 + num2;
    //Definindo que multi ir� multiplicar os n�meros.
    multi = num1 * num2;
    //Definindo que na divi a vari�vel num1 ser� dividida pela vari�vel num2.
    divi = num1 / num2;
    //Modulo ser� o resto da divis�o, ou seja, caso o resultado seja "10,5" o modulo ir� dar "5".
    modulo = num1%num2;
    //Definindo que subt ir� subtrair as vari�veis.
    subt = num1 - num2;
    
    //Mostra o resultado para n�s da soma.
    cout << soma << endl;
    //Mostra o resultado da multiploca��o.
    cout << multi << endl;
    //Mostra o resultado da divis�o.
    cout << divi << endl;
    //Mostra o resultado do modulo.
    cout << modulo << endl;
    //Mostra o resultado da subtra��o.
    cout << subt << endl;
    
    return 0;
}