//Biblioteca padrão.
#include <iostream>
//Biblioteca padrão.
#include <stdlib.h>
//Evita a repetição do "std::";
using namespace std;

int main () {
    //Definição das variáveis usando double por possuir o dobro da capacidade de um float.
    double ac1, ac2, af;
    //Interface para o usuário falar quanto tirou na ac1.
    cout << "Digite a nota da sua ac1: ";
    //Lê e armazena a informação na variável em questão.
    cin >> ac1;
    //Interface que pede a nota da ac2.
    cout << "Digite a nota da sua ac2: ";
    //Lê e armazena a informação na variável em questão.
    cin >> ac2;
    //Interface que pergunta quanto você tirou na AF
    cout << "Digite o valor da sua af: ";
    //Lê e armazena a informação na variável em questão.
    cin >> af;
   //Equação para definir a média. Essa em questão usa um sistema de pesos nas notas, então foi necessário pegar o valor total das variáveis e multiplicar cada uma por seu peso específico. 
   double media = (ac1*1.5 + ac2*3.5 + af*5);
   //Etapa final onde a média será definida com uma divisão.
   media = (media/10);
   //Condicional usada para definir se o aluno foi ou não aprovado. Esta pede uma média maior ou igual a 5 para funcionar.
   if (media >=5){
       //Mensagem que irá aparecer caso o valor da sua média cumpra o requisito.
       cout << "Parabens! Você foi aprovado! " << media << endl;
   }
    //Caso sua média não cumpra a condição primária será mandado para cá automaticamente.
   else {
       //Mensagem que aparece caso o valor da sua média seja menor que 5.
       cout << "Que pena, você foi reprovado! " << media << endl;
   }
    return 0;
}
