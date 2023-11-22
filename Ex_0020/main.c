#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int btn_menu,meses;
    float salario,n_salario;

        printf ("Digite um número de acordo com a opção desejada: \n\n");
        printf ("|*************************************|\n");
        printf ("|             Menu de opções:         |");
        printf ("\n|=====================================|");
        printf ("\n|(1) Novo salário                     |");
        printf ("\n|(2) Férias                           |");
        printf ("\n|(3) Décimo terceiro                  |");
        printf ("\n|(4) Sair                             |\n");
        printf ("|*************************************|\n\n");

        do{
        scanf("%d", &btn_menu);

        if(btn_menu == 1){
             printf ("Informe o seu salario: \n");
             scanf("%f", &salario);
                if(salario<=600){
                    n_salario=(salario*0.15)+salario;  }
                else if(salario > 600 && salario <= 1200){
                    n_salario=(salario*0.1)+salario; }
                else if(salario > 1200){
                    n_salario=(salario*0.05)+salario; }
            printf("\nSeu novo salario com base no porcentual de aumento é de : R$%.2f\n", n_salario);
        }
        else if(btn_menu == 2){
            printf ("Informe o seu salario: \n");
            scanf("%f", &salario);
                n_salario=(salario*0.33)+salario;
            printf("\nO valor de suas férias é de : R$%.2f\n", n_salario);
        }
         else if(btn_menu == 3){
            printf ("Informe o seu salario: \n");
            scanf("%f", &salario);
            do{
                printf ("Informe a quantidade de meses na empresa: \n");
                scanf("%d", &meses);
                if(meses>12){
                    printf("Máximo de meses permitido é 12. Por favor insira a quantidade correta.\n\n");}
            }while(meses>12);
            n_salario=(salario*meses)/12;
              printf("\nO valor do seu décimo terceiro é de : R$%.2f\n", n_salario);
         }
         else if(btn_menu == 4){
                 return 0;
         }
        else{
        printf("Por favor escolha uma opção válida.\n");
        }




        }while(btn_menu>4);

}
