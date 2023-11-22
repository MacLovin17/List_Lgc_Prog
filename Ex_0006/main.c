#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    float Vini, Vpag;
    char cond = 's'; // Inicialize cond com 's' para entrar no loop

    while (cond == 's') {
        printf("Informe o valor do produto que deseja:\n");
        scanf("%f", &Vini);

        printf("\nEscolha o c�digo de acordo com a condi��o de pagamento que deseja:\n\n");
        printf("1_ � vista em dinheiro ou cheque: 10%% de desconto.\n");
        printf("2_ � vista no cart�o de d�bito: 7,5%% de desconto.\n");
        printf("3_ � vista no cart�o de cr�dito: 5%% de desconto.\n");
        printf("4_ em duas vezes: pre�o normal de tabela sem juros.\n");
        printf("5_ em quatro vezes: pre�o normal de tabela mais juros de 9,5%%.\n\n");
        int cod;
        scanf("%d", &cod);

        if (cod == 1) {
            Vpag = Vini - (Vini * 0.1);
            printf("\nValor a ser pago: %.2f\n", Vpag);
        } else if (cod == 2) {
            Vpag = Vini - (Vini * 0.075);
            printf("\nValor a ser pago: %.2f\n", Vpag);
        } else if (cod == 3) {
            Vpag = Vini - (Vini * 0.05);
            printf("\nValor a ser pago: %.2f\n", Vpag);
        } else if (cod == 4) {
            Vpag = Vini / 2;
            printf("\nValor a ser pago, duas vezes de: %.2f\n", Vpag);
        } else if (cod == 5) {
            Vpag = (Vini + (Vini * 0.095)) / 4;
            printf("\nValor a ser pago, quatro vezes de: %.2f\n", Vpag);
        }

        printf("\nDeseja calcular outro pre�o? (s) para sim, (n) para n�o.\n");
        getchar();
        scanf("%c", &cond);
    }

    printf("\nObrigado por usar nosso sistema!\n");

    return 0;
}
