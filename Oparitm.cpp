//Biblioteca padrão.
#include <iostream>
//Evita o uso de "std::"
using namespace std;

int main () {
    //Definição das duas variáveis.
    int num1 = 10, num2 = 4;
    //Declaração das variáveis.
    int soma, multi, divi, modulo, subt;
    
    //Definindo a operação usando a variável soma para somar os números entre sí.
    soma = num1 + num2;
    //Definindo que multi irá multiplicar os números.
    multi = num1 * num2;
    //Definindo que na divi a variável num1 será dividida pela variável num2.
    divi = num1 / num2;
    //Modulo será o resto da divisão, ou seja, caso o resultado seja "10,5" o modulo irá dar "5".
    modulo = num1%num2;
    //Definindo que subt irá subtrair as variáveis.
    subt = num1 - num2;
    
    //Mostra o resultado para nós da soma.
    cout << soma << endl;
    //Mostra o resultado da multiplocação.
    cout << multi << endl;
    //Mostra o resultado da divisão.
    cout << divi << endl;
    //Mostra o resultado do modulo.
    cout << modulo << endl;
    //Mostra o resultado da subtração.
    cout << subt << endl;
    
    return 0;
}