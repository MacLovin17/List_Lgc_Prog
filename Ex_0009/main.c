#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int n1, n2, mdc, i,a,b;

    printf("Informe o primeiro número: \n");
    scanf("%d", &n1);
    getchar();
    printf("Informe o segundo número: \n");
    scanf("%d", &n2);
    a=n1;
    b=n2;
    mdc = 1;
    while (i!=1) {
        if(n1>n2){
            i==n1;
        }
        else{
            i==n2;
        }
        if (n1 % i == 0 && n2 % i == 0) {
            n1 = n1 / i;
            n2 = n2 / i;
            mdc *= i;
        } else {
            i--;
        }
    }
    printf("O MDC de %d e %d é %d\n", a, b, mdc);

    return 0;
}
