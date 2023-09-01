#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

int main()
{

   int continua, contador;
   continua = 's';
   contador = 0;

   int diasE10, multiplicadorAnoE10, anosE10, restoAnoE10, multiplicadorMesE10, restoMesE10, mesE10;

   while (continua == 's')
   {
      diasE10 = 0, multiplicadorAnoE10 = 0, anosE10 = 0, restoAnoE10 = 0, multiplicadorMesE10 = 0, restoMesE10 = 0, mesE10 = 0;
      // ---->come�o<----

      printf("Quantos dias voce tem? \n");
      scanf("%d", &diasE10);

      if (diasE10 >= 365)
      {
         multiplicadorAnoE10 = diasE10 / 365;
         restoAnoE10 = diasE10 % 365;

         anosE10 = 1 * multiplicadorAnoE10;
      }

      if (restoAnoE10 >= 30)
      {
         multiplicadorMesE10 = restoAnoE10 / 30;
         restoMesE10 = restoAnoE10 % 30;

         mesE10 = 1 * multiplicadorMesE10;
      }
      diasE10 = restoMesE10;

      printf("%d anos, %d meses, %d dias \n", anosE10, mesE10, diasE10);

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

   return 0;
}
