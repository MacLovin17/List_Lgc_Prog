#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
 setlocale(LC_ALL,"portuguese");

    printf ("************************************************************************************************************************\n");
    printf ("                                       INSTITUTO FEDERAL DO TRI�NGULO MINEIRO - IFTM");
    printf ("\n                                                     CAMPUS PARACATU");
    printf ("\n                                               LOGICA DE PROGRAMA��O - ADS\n");
    printf (" PROFESSOR: Gustavo Alexandre.\n");
    printf (" ALUNOS: �riky Gomes.\n");
    printf ("************************************************************************************************************************\n\n");
    printf ("                                              Lista 02 - ADS \n\n");
    printf ("========================================================================================================================\n");

    float Ht, salario, Hx, Pag, Vht, Vhx, Bsalario, bruto, imp;

    printf("Informe o numero de horas trabalhadas:\n");
    scanf("%f", &Ht);

    printf("Informe o salario m�nimo:\n");
    scanf("%f", &salario);

    printf("Informe o numero de horas extra:\n");
    scanf("%f", &Hx);

    Vht=(salario*0.125);
    Vhx=(salario*0.25);
    Bsalario=(Ht*Vht);
    Vhx=(Vhx*Hx);
    bruto=(Bsalario+Vhx);
    imp=(bruto*0.085);
    Pag=(bruto-imp);

    printf("Valor a receber �:%2.f\n", Pag);




    system("PAUSE");
    return 0;
}
