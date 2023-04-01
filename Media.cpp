//Bibliotecas padr�es.
#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    //Declara��o das variaveis usando o Double. Ele consegue armazenar valores muito grandes.
    double nota1, nota2, nota3, nota4;
    //Criando a primeira interface interativa com o usuario
    cout << "Digite a sua primeira nota do semestre >>> ";
    //A informa��o ser� armazenada na variavel "nota1".
    cin >> nota1;
    //Segunda interface
    cout << "Digite a sua segunda nota do semestre >>> ";
    //Recebimento da informa��o
    cin >> nota2;
    //Terceira interface
    cout << "Digite a sua terceira nota do semestre >>> ";
    //Recebe a informa��o e armazena na variavel
    cin >> nota3;
    //Quarta interface
    cout << "Digite a sua quarta nota do semestre >>> ";
    //Recebe a informa��o
    cin >> nota4;
    //Calculo feito para descobrir nossa media. Double tamb�m � usado para arredondar n�meros.
    double soma = (nota1 + nota2 + nota3 + nota4);
    //Etapa final da conta. Divis�o para saber o valor final.
    soma = (soma/4);
    //Interface relacionada com a soma/media.
    cout << "A sua m�dia no semestre foi " << soma << endl << endl;
    //Condi��o relacionada com o resultado da equa��o. Se o valor for igual ou maior que 7 seremos levados para uma interface especifica.
    if (soma >= 7) {
        //Interface que s� aparece se tivermos cumprido o(s) requisito(s). 
        cout << "Parabens! Voc� foi aprovado!" << endl;
        //Interface alternativa que aparece toda vez que o requisito n�o for cumprido.
    }else{
        cout << "Eita! Voc� foi reprovado!" << endl;
    }
    return 0;
}