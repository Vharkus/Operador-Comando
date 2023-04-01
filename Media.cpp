//Bibliotecas padrões.
#include <iostream>
#include <stdlib.h>
using namespace std;

int main () {
    //Declaração das variaveis usando o Double. Ele consegue armazenar valores muito grandes.
    double nota1, nota2, nota3, nota4;
    //Criando a primeira interface interativa com o usuario
    cout << "Digite a sua primeira nota do semestre >>> ";
    //A informação será armazenada na variavel "nota1".
    cin >> nota1;
    //Segunda interface
    cout << "Digite a sua segunda nota do semestre >>> ";
    //Recebimento da informação
    cin >> nota2;
    //Terceira interface
    cout << "Digite a sua terceira nota do semestre >>> ";
    //Recebe a informação e armazena na variavel
    cin >> nota3;
    //Quarta interface
    cout << "Digite a sua quarta nota do semestre >>> ";
    //Recebe a informação
    cin >> nota4;
    //Calculo feito para descobrir nossa media. Double também é usado para arredondar números.
    double soma = (nota1 + nota2 + nota3 + nota4);
    //Etapa final da conta. Divisão para saber o valor final.
    soma = (soma/4);
    //Interface relacionada com a soma/media.
    cout << "A sua média no semestre foi " << soma << endl << endl;
    //Condição relacionada com o resultado da equação. Se o valor for igual ou maior que 7 seremos levados para uma interface especifica.
    if (soma >= 7) {
        //Interface que só aparece se tivermos cumprido o(s) requisito(s). 
        cout << "Parabens! Você foi aprovado!" << endl;
        //Interface alternativa que aparece toda vez que o requisito não for cumprido.
    }else{
        cout << "Eita! Você foi reprovado!" << endl;
    }
    return 0;
}