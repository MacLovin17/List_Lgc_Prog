#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int btn_menu,meses;
    float salario,n_salario;

        printf ("Digite um n�mero de acordo com a op��o desejada: \n\n");
        printf ("|*************************************|\n");
        printf ("|             Menu de op��es:         |");
        printf ("\n|=====================================|");
        printf ("\n|(1) Novo sal�rio                     |");
        printf ("\n|(2) F�rias                           |");
        printf ("\n|(3) D�cimo terceiro                  |");
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
            printf("\nSeu novo salario com base no porcentual de aumento � de : R$%.2f\n", n_salario);
        }
        else if(btn_menu == 2){
            printf ("Informe o seu salario: \n");
            scanf("%f", &salario);
                n_salario=(salario*0.33)+salario;
            printf("\nO valor de suas f�rias � de : R$%.2f\n", n_salario);
        }
         else if(btn_menu == 3){
            printf ("Informe o seu salario: \n");
            scanf("%f", &salario);
            do{
                printf ("Informe a quantidade de meses na empresa: \n");
                scanf("%d", &meses);
                if(meses>12){
                    printf("M�ximo de meses permitido � 12. Por favor insira a quantidade correta.\n\n");}
            }while(meses>12);
            n_salario=(salario*meses)/12;
              printf("\nO valor do seu d�cimo terceiro � de : R$%.2f\n", n_salario);
         }
         else if(btn_menu == 4){
                 return 0;
         }
        else{
        printf("Por favor escolha uma op��o v�lida.\n");
        }




        }while(btn_menu>4);

}
