#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int n,calc,i=1,somador=0;
    printf("Informe um número:\n");
    scanf("%d", &n);
    while(i != n){
        calc=n/i;

        if (n%i==0){
            somador=i+somador;
        }


        i++;
    }
        if(somador==n){
            printf("\nO número %d é perfeito.\nPois, a soma de seus divisores é igual a %d\nSoma dos divisores: %d",n,n, somador);
        }
        else{
             printf("\nO número %d não é perfeito.\nPois, a soma de seus divisores não é igual a %d\nSoma dos divisores: %d",n,n ,somador);
        }


    return 0;
}
