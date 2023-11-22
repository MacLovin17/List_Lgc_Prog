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

    float idade, peso, gotas;

    printf("Informe sua idade:\n");
    scanf("%f", &idade);

    printf("Informe seu peso:\n");
    scanf("%f", &peso);

    if(idade>=12 && peso >=60){
        gotas=((1000*20)/500);
    }
    else if(idade>=12 && peso <60){
        gotas=((875*20)/500);
    }
    else if(idade<12 && peso>5 && peso<=9){
        gotas=((125*20)/500);
    }
    else if(idade<12 && peso>9 && peso<=16){
        gotas=((250*20)/500);
    }
    else if(idade<12 && peso>16 && peso<=24){
        gotas=((375*20)/500);
    }
    else if(idade<12 && peso>24 && peso<=30){
        gotas=((500*20)/500);
    }
    else if(idade<12 && peso>=30){
        gotas=((750*20)/500);
    }

    printf("Você deverá tomar %2.f gotas do medicamento por dose.\n ", gotas);
    system("PAUSE");
    return 0;
}
