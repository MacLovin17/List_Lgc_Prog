#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"portuguese");

    float n=1,s,x=1,y=1,z=0;
    printf("Digite um número:\n");
    scanf("%f", &n);

    for(size_t i=1; i<=n;i++){
        s=(x/pow(y,i));
        y++;
        z+=s;

    }
    printf("%f\n",z);
    return 0;
}
