#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



int main() {

int continua, contador;
continua = 's';
contador = 0;

int anosE9, mesesE9, diasE9, diasTotalE9;

while (continua == 's')
{
anosE9 = 0, mesesE9 = 0, diasE9 = 0, diasTotalE9 = 0;

     // ---->come�o<----

    printf("Quantos anos voce tem? \n");
    scanf("%d", &anosE9);

    printf("Quantos meses desde o seu aniversario? \n");
    scanf("%d", &mesesE9);

    printf("Quantos dias que o mes comecou? \n");
    scanf("%d", &diasE9);

    diasTotalE9 = (anosE9 * 365) + ((mesesE9 - 1) * 30) + diasE9;

    printf("A sua idade em dias e aproximadamente %d \n", diasTotalE9);

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
