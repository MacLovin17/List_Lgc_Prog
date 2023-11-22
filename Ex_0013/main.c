#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "portuguese");

    int x=1,y=1,soma;

    while(x<=10){

        soma=x*y;

        printf("%d x %d = %d\n", x,y,soma);
         if(y>=10){
            y=0;
            x++;
        }
        y++;
    }

    printf("\nFIM!");



    return 0;
}
