#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int n,calc,i=1,somador=0;
    printf("Informe um n�mero:\n");
    scanf("%d", &n);
    while(i != n){
        calc=n/i;

        if (n%i==0){
            somador=i+somador;
        }


        i++;
    }
        if(somador==n){
            printf("\nO n�mero %d � perfeito.\nPois, a soma de seus divisores � igual a %d\nSoma dos divisores: %d",n,n, somador);
        }
        else{
             printf("\nO n�mero %d n�o � perfeito.\nPois, a soma de seus divisores n�o � igual a %d\nSoma dos divisores: %d",n,n ,somador);
        }


    return 0;
}
