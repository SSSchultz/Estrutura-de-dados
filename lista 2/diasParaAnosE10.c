#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



int main() {

int continua, contador;
continua = 's';
contador = 0;

int diasE10;

while (continua == 's')
{
     // ---->come�o<----

    printf("Quantos dias voce tem? \n");
    scanf("%d", &diasE10);

    if (diasE10 >= 365)
    {
        multiplicadorE10 = diasE10 % 365;

        anosE10 = 1 * multiplicadorE10;
    }
    

    // ---->final<----

   printf("Repentindo....\n");

   contador++;

   printf("Tecle 's' e aguarde se deseja continuar \n");
   continua = getch();
   sleep(1);
}

if (contador == 0)
   printf("O bloco NAO foi repetido.");
else printf("O bloco foi repetido %d vezes", contador);

return 0;
}
