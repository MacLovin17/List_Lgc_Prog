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
    float n1=0, n2=0, n3=0, p1=2, p2=3, p3=5, med;

    printf("Digite a nota do Tabalho de laboratório:\n");
    scanf("%f", &n1);

    printf("Digite a nota da Avaliação Semestral:\n");
    scanf("%f", &n2);

    printf("Digite a nota do Exame final:\n");
    scanf("%f", &n3);

    med = (((n1*p1)+(n2*p2)+(n3*p3))/(p1+p2+p3));

    if(med>=8){
        printf("Conceito A!\n");
    }
    if(med<8 && med>7){
        printf("Conceito B!\n");
    }
    if(med<7 && med>6){
        printf("Conceito C!\n");
    }
    if(med<6 && med>5){
        printf("Conceito D!\n");
    }
    if(med<5){
        printf("Conceito E!\n");
    }


    printf("Sua media é: %.2f",med);
    system("PAUSE");
    return 0;
}
