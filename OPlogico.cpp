//Biblioteca padrão.
#include <iostream>
//Forma de não precisarmos escrever "std::" para o código funcionar.
using namespace std;

int main () {
    //Declaração e definição das variaveis. Como tem o sinal de igual os valores serão fixos.
    int a = 5;
    int b = 10;
    int c = 15;
    
    //Foi criada uma condição onde é necessário que A seja menor que B E(&&) que B seja menor que C.
    if (a < b && b < c) {
        //Cumprida a condição usando o operador a interface será mostrada.
        cout << "A ordem é: a, b, c" << endl;
    }
    
    //Condição que aceita uma das respostas: Se A for maior que B OU(||) B for maior que C.
    if (a > b || b > c) {
        //Interface refente a condição em questão. Ela surge quando a condição for cumprida.
        cout << "Pelo menos uma das condições é verdadeira" << endl;
    }
    
    //Operador lógico de negação. Se as variaveis NÃO(!) forem igual ele será ativado.
    if (!(a == b))  {
        //Interface referente a not que comprova que as variaveis não são iguais. 
        cout << "A é diferente de B" << endl;
    }
    return 0;
}