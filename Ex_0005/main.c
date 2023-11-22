#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
 setlocale(LC_ALL,"portuguese");

    printf ("************************************************************************************************************************\n");
    printf ("                                       INSTITUTO FEDERAL DO TRIÂNGULO MINEIRO - IFTM");
    printf ("\n                                                     CAMPUS PARACATU");
    printf ("\n                                               LOGICA DE PROGRAMAÇÃO - ADS\n");
    printf (" PROFESSOR: Gustavo Alexandre.\n");
    printf (" ALUNOS: Ériky Gomes.\n");
    printf ("************************************************************************************************************************\n\n");
    printf ("                                              Lista 02 - ADS \n\n");
    printf ("========================================================================================================================\n");

    float altura, largura, comprimento, a_pared1, a_pared2, a_piso, p1, p2, p3, t1, t2;

    printf("\nInforme a altura da parede:\n");
    scanf("%f", &altura);

    printf("Informe o comprimento do piso:\n");
    scanf("%f", &comprimento);

    printf("Informe a largura do piso:\n");
    scanf("%f", &largura);

    a_pared1=(comprimento*altura)*2;
    a_pared2=(largura*altura)*2;
    a_piso=(comprimento*largura);

    p1=a_piso*24;
    p2=a_piso*31;
    p3=a_piso*55;
    t1=(((a_pared1+a_pared2)*22)/2);
    t2=(((a_pared1+a_pared2)*47)/2);

    printf ("*******************************************************************\n");
    printf ("|                        TABELA DE GASTOS                         |");
    printf ("\n|_________________________________________________________________|");
    printf ("\n|             PISO               |            PAREDE              |");
    printf ("\n|     Tipo 1   |  R$%.2f      |     Tipo 1  |  R$%.2f       |", p1,t1);
    printf ("\n|     Tipo 2   |  R$%.2f      |     Tipo 2  |  R$%.2f       |",p2,t2);
    printf ("\n|     Tipo 3   |  R$%.2f      |             |                  |\n",p3);
    printf ("*******************************************************************\n\n");






    system("PAUSE");
    return 0;
}
