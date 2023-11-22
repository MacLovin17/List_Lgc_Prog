#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
        setlocale(LC_ALL,"portuguese");
    int t1 = 0, t2 = 0, n = 2, a = 0,i;
    printf("Informe o primeiro termo: \n");
    scanf("%d", &t1);
    getchar();
    printf("Informe o segundo termo: \n");
    scanf("%d", &t2);
    getchar();
    printf("Informe o número de termos que deseja: \n");
    scanf("%d", &n);
    for (i=3;i<= n;i++)
    {

        if (i % 2 == 0)
        {
            a = (t2 - t1);
        }
        else
        {
            a = (t2 + t1);
        }
        t1 = t2;
        t2 = a;

        printf("\nTermo %d =  %d\n", i, a);
    }

    return 0;
}
