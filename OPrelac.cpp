//Biblioteca padrão.
#include <iostream>
//Serva para precisarmos escrever "std::" na frente de cada "cout/cin"
using namespace std;

int main () {
    //Definição das variáveis X e Y.
    int x = 10;
    int y = 20;
    //Condição que usa o operador relacional maior(>). Se X > Y ela será cumprida.
    if (x > y) {
        //Interface que irá aparecer caso a variavel X seja maior que Y.
        cout << "X é maior que Y" << endl;
    }
    //Condição feita usando o operador menor(<) para descobrir se X é menor que Y.
    if (x < y) {
        //Mensagem que só aparece se a condição for cumprida.
        cout << "X é menor que Y" << endl;
    }
    //Uso do operador maior igual(>=), ou seja, é NECESSÁRIO que X seja igual ou maior que y para funcionar. Tecnicamente, duas condições em uma. 
    if (x >= y) {
        //Se os numeros forem pelo menos iguais está mensagem irá aparecer.
        cout << "X é maior ou igual a Y" << endl;
    }
    //Uso do operador menor igual (<=). Uso semelhante ao maior igual, mas dessa vez precisa ser no maximo igual.
    if (x <= y) {
        //Interface para caso o numero seja menor ou no maximo igual ao outro.
        cout << "X é menor ou igual a Y" << endl;
    }
    //O uso de (==) pede que as variaveis sejam iguais, caso contrário não funcionará.
    if (x == y) {
        //Toda vez que os numeros foram iguais esta mensagem vai aparecer.
        cout << "X é igual a Y" << endl;
    }
    //Condição que exige os números serem diferentes para funcionar.
    if (x != y) {
        //Mensagem que confirma que x e y são diferentes.
        cout << "X é diferente de Y" << endl;
    }
    
    return 0;
}