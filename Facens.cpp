//Biblioteca padr�o.
#include <iostream>
//Biblioteca padr�o.
#include <stdlib.h>
using namespace std;

int main () {
    //Defini��o das vari�veis usando double por possuir o dobro da capacidade de um float.
    double ac1, ac2, af;
    //Interface para o usu�rio falar quanto tirou na ac1.
    cout << "Digite a nota da sua ac1: ";
    //L� e armazena a informa��o na vari�vel em quest�o.
    cin >> ac1;
    //Interface que pede a nota da ac2.
    cout << "Digite a nota da sua ac2: ";
    //L� e armazena a informa��o na vari�vel em quest�o.
    cin >> ac2;
    //Interface que pergunta quanto voc� tirou na AF
    cout << "Digite o valor da sua af: ";
    //L� e armazena a informa��o na vari�vel em quest�o.
    cin >> af;
   //Equa��o para definir a m�dia. Essa em quest�o usa um sistema de pesos nas notas, ent�o foi necess�rio pegar o valor total das vari�veis e multiplicar cada uma por seu peso espec�fico. 
   double media = (ac1*1.5 + ac2*3.5 + af*5);
   //Etapa final onde a m�dia ser� definida com uma divis�o.
   media = (media/10);
   //Condicional usada para definir se o aluno foi ou n�o aprovado. Esta pede uma m�dia maior ou igual a 5 para funcionar.
   if (media >=5){
       //Mensagem que ir� aparecer caso o valor da sua m�dia cumpra o requisito.
       cout << "Parabens! Voc� foi aprovado! " << media << endl;
   }
    //Caso sua m�dia n�o cumpra a condi��o prim�ria ser� mandado para c� automaticamente.
   else {
       //Mensagem que aparece caso o valor da sua m�dia seja menor que 5.
       cout << "Que pena, voc� foi reprovado! " << media << endl;
   }
    return 0;
}