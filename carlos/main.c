#include <stdio.h>
#include <stdlib.h>

    float calculodatinta(float altura, float largura, float comprimento)
    {
        float tinta;
        int opcaodetinta;
        printf("Tabela de tintas:\nOpcao [1] R$22,00\nOpcao [2] R$47,00\n");
        scanf("%d", &opcaodetinta);

        switch (opcaodetinta)
        {
        case 1:
            tinta = (altura * largura * comprimento * 2) * 22;
            break;
        case 2:
            tinta = (altura * largura * comprimento * 2) * 47;
            break;
        default:
        printf("Invalido: \n");
            break;
        }

        return tinta;

    }

    float calculodopiso(float largura, float comprimento)
    {
        float piso;
        int opcaodepiso;
        printf("Tabela de pisos:\nOpcao [1] R$24,00\nOpcao [2] R$31,00\nOpcao [3] R$55,00\n");
        scanf("%d", &opcaodepiso);

        switch (opcaodepiso)
        {
        case 1:
            piso = largura * comprimento * 24;
            break;
        case 2:
            piso = largura * comprimento * 31;
            break;
        case 3:
            piso = largura * comprimento * 55;
            break;
        default:
        printf("Invalido: \n");
            break;
        }

        return piso;
    }

        int main(){

            float altura, largura, comprimento, piso, tinta;

            printf("Digite a altura: ");
            scanf("%f", &altura);

            printf("Digite a largura: ");
            scanf("%f", &largura);

            printf("Digite o comprimento: ");
            scanf("%f", &comprimento);

            piso = calculodopiso(altura, largura);
            tinta = calculodatinta(altura, largura, comprimento);

            printf("Valor gasto com tintas: R$%.2f\n", tinta);
            printf("Valor gasto com piso: R$%.2f\n", piso);

            return 0;
        }
