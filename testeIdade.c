#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



int main() {

int continua, contador;
continua = 's';
contador = 0;

int idadeE6, idadeE62, mesesE6, diasE6, horasE6, minutosE6;


while (continua == 's')
{
    idadeE6 = 0;
    idadeE62 = 0;
    mesesE6 = 0;
    diasE6 = 0;
    horasE6 = 0;
    minutosE6 = 0;
     // ---->come�o<----

    printf("Qual a sua idadeE6?\n");
    scanf("%d", &idadeE6);

    mesesE6 = idadeE6 * 12;

    diasE6 = idadeE6 * 365;

    idadeE62 = idadeE6;

    while (idadeE62 > 0)
    {
        diasE6++;
        idadeE62 = idadeE62 - 4;
    };

    horasE6 = diasE6 * 24;

    minutosE6 = horasE6 * 60;

    printf("voce tem %d anos ou %d mesesE6 ou %d diasE6 ou %d horasE6 ou %d minutosE6\n", idadeE6, mesesE6, diasE6, horasE6, minutosE6);



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
