#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void main()
{

   int continua, contador;
   continua = 's';
   contador = 0;

   float numero, numeroF;
   int numeroI, numeroA;

   while (continua == 's')
   {
      numero = 0.0;
      numeroA = 0;
      numeroF = 0.0;
      numeroI = 0;

      // ---->come�o<----

      printf("Qual sera o numero real?\n");
      scanf("%f", &numero);

      numeroI = numero;
      numeroF = numero - numeroI;
      numeroA = round(numero);

      printf("o seu numero %.5f tem como a parte inteira %.d, como parte fracional %.5f e é arredondado para %d \n", numero, numeroI, numeroF, numeroA);

      // ---->final<----

      printf("Repentindo....\n");

      contador++;

      printf("Tecle 's' e aguarde se deseja continuar \n");
      continua = getch();
      sleep(1);
   }

   if (contador == 0)
      printf("O bloco NAO foi repetido.");
   else
      printf("O bloco foi repetido %d vezes", contador);
}
