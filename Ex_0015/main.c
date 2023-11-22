#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float idad = 1, peso, alt, med_alt, m_alt = 0,cont_olho=0, porc;
    int c_olho, c_cabelo, p = 0, med = 0, cont_k=0;

    while (idad != 0) {
        printf("Informe sua idade:\n");
        scanf("%f", &idad);

        if (idad == 0) {
            break;
        }

        getchar();
        printf("\nInforme seu peso (Kg):\n");
        scanf("%f", &peso);
        getchar();
        printf("\nInforme sua altura em (cm):\n");
        scanf("%f", &alt);
        getchar();

        printf("\nInforme a cor de seu olho:\n(1) Azul\n(2) Preto\n(3) Castanho\n(4) Verde\n");
        scanf("%d", &c_olho);
        getchar();
        printf("\nInforme a cor de seu cabelo:\n(1) Ruivo(a)\n(2) Preto\n(3) Castanho\n(4) Grisalho\n(5) Loiro(a)\n");
        scanf("%d", &c_cabelo);
        getchar();

        p++;
        if (idad > 50 && peso < 60) {
            med++;
        }
        if (alt < 150) {
            m_alt += idad;
        }
        if(c_olho == 1){
            cont_olho++;
        }
        if(c_cabelo == 1 && c_olho != 1){
            cont_k ++;
        }

    }


    med_alt = (m_alt / p);
    porc=(cont_olho*100)/p;

    printf("\nA quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg é: %d pessoas.\n", med);
    printf("\nA média das idades das pessoas com altura inferior a 1,50 m é: %.2f anos.\n", med_alt);
    printf("\nA porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas é: %.2f %%\n", porc);
    printf("\nA quantidade de pessoas ruivas e que não possuem olhos azuis é: %d\n", cont_k);

    return 0;
}
