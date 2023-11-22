#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float Vp, calc;
    char cond = 's';

    while(cond == 's'){

        printf("Informe o valor do produto:\n");
        scanf("%f", &Vp);

        if(Vp <=50){
            calc=(Vp+(Vp*0.05));
        }
           else if(Vp > 50 && Vp < 100){
            calc=(Vp+(Vp*0.1));
        }
          else if(Vp >= 100){
            calc=(Vp+(Vp*0.15));
        }

        if (calc <=80){
            printf("\nO novo preço é: %.2f. Classificado como: Barato.\n", calc);
        }
        if (calc >80 && calc <120){
            printf("\nO novo preço é: %.2f. Classificado como: Normal.\n", calc);
        }
        if (calc >120 && calc <200){
            printf("\nO novo preço é: %.2f. Classificado como: Caro.\n", calc);
        }
        if (calc >= 200){
            printf("\nO novo preço é: %.2f. Classificado como: Muito Caro.\n", calc);
        }
        printf("\nDeseja calcular outro preço? (s) para sim, (n) para não.\n");
            getchar();
            scanf("%c", &cond);
    }
    return 0;
}
