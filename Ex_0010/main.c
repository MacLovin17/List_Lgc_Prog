#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() {
    setlocale(LC_ALL, "portuguese");

    float a=80000,b=200000;
    int ano=0;
    printf("Seja bem vindo!\n");

    while(a<=b){
            a=(a*0.03)+a;
            b=(b*0.015)+b;
            ano++;
    }


    printf("\nA quantidade de anos necess�rio para a cidade A ultrapassar ou igualar a cidade B �: %d anos.\n\nCidade A %.2f habitantes, Cidade B � %.2f habitantes.\n\n", ano, a, b);
    system ("PAUSE");
    return 0;
}
