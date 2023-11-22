#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int fatorial(int n) {
    int i, fat = 1;
    if (n == 0 || n == 1)
        return 1;
    else
        for (i = 2; i <= n; i++) {
            fat *= i;
        }
    return fat;
}

int main() {
    setlocale(LC_ALL, "portuguese");

    int cont = 2;
    float crazy, n1,n2;



    printf("Digite o n:\n");
    scanf("%f", &n);
    crazy=(float)fatorial(n);

    for (size_t i = 2; i <= n; i++) {
        if (i % 2 == 0 ) {
            crazy -= fatorial(n - i) / pow(cont, cont);
        } else {
            crazy += fatorial(n - i) / pow(cont, cont);
        }
        cont++;
    }

    printf("Crazy = %f\n", crazy);
    return 0;
}
