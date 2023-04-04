//Bibliotecas padrões.
#include <iostream>
#include <stdlib.h>
//Evita a repetição do "std::";
using namespace std;

int main () {
    //Declaração das variaveis usando o Double. Ele consegue armazenar valores muito grandes.
    double nota1, nota2, nota3, nota4;
    //Varável criada para servir de condição na repetição do código.
    char  continuar = 's';
    //Criada a condição que permite a repetição de todo o código, caso a condicional seja feita.
    while(continuar == 's' || continuar == 'S'){
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
    //Segunda opção de condição. Aqui, o caso se torna mais específico, pois se a nota for "5" ou "6" algo irá acontecer.    
    }else if(soma <= 6, soma >= 5){
        //Interface nova que mostra que o aluno está de recuperação por tirar uma nota menor que 7.
        cout << "Não passou, será necessário a recuperação."<< endl;
    }//Caso nenhuma das outras condições se cumprar, ou seja, o valor da "soma" foi 4 ou menor.
    else{
        //Interface que aparece toda vez que o resultado final for menor ou igual a 4.
        cout << "Eita! Você foi reprovado!" << endl;
    }
        //Interface interativa que possibilita a repetição ou finalização do código. 
        cout << "Deseja continuar?(s/n)"<< endl;
        //Armazena e analisa a resposta. "Continuar" já teve seu valor atrelado, então dependendo da resposta o programa irá repetir.
        cin >> continuar;
    }
    return 0;
}
