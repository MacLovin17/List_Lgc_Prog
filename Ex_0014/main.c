#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int i = 0, TotS = 0, TotN = 0, TotF = 0, TotM = 0, TotFS=0, PorM=0;
    char sexo[50], resp[50];

    while (i < 20) {
        printf("Informe seu sexo: (M) para Masculino e (F) para Feminino\n");
        scanf("%s", sexo);

        printf("Você gostou do nosso novo produto? (S) para sim e (N) para não\n");
        getchar();
        scanf("%s", &resp);

        if (strcmp(sexo, "M") == 0) {
            TotM++;
        }
        else if (strcmp(sexo, "F") == 0) {
            TotF++;
        }

        if (strcmp(resp, "S") == 0) {
            TotS++;
        }
        else if (strcmp(resp, "N") == 0) {
            TotN++;
        }

        if ((strcmp(resp, "S" ) == 0)&& (strcmp(sexo, "F") == 0)) {
            TotFS++;
        }
        if ((strcmp(resp, "N" ) == 0)&& (strcmp(sexo, "M") == 0)) {
            PorM++;
        }
        i++;
        printf("\n%d, %d, %d, %d, %d\n", i, TotF, TotM, TotS, TotF);
    }
     PorM=(PorM*100)/TotM;

    printf("\n O número de pessoas que responderam sim: %d\n", TotS);
    printf("O número de pessoas que responderam não: %d\n", TotN);
    printf("o número de mulheres que responderam sim: %d\n", TotFS);
    printf("A porcentagem de homens que responderam não, entre todos os homens analisados: %d%%\n", PorM);

    return 0;
}
