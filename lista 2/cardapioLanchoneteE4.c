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

   int pedidoE4, quantidadeE4;
   float totalE4;

   while (continua == 's')
   {
      // ---->come�o<----

      printf("O que voce gostaria de pedir? \n 100 - Cachorro quente \n 101 - Bauru simples \n 102 - Bauru com ovo \n 103 - Hamburger \n 104 - Cheeseburger \n 105 - Refrigerante \n");
      scanf("%d", &pedidoE4);

      printf("Quantos voce gostaria? \n");
      scanf("%d", &quantidadeE4);

      if (pedidoE4 == 100)
      {
         totalE4 = quantidadeE4 * 1.2;
      }
      if (pedidoE4 == 101)
      {
         totalE4 = quantidadeE4 * 1.3;
      }
      if (pedidoE4 == 102)
      {
         totalE4 = quantidadeE4 * 1.5;
      }
      if (pedidoE4 == 103)
      {
         totalE4 = quantidadeE4 * 1.2;
      }
      if (pedidoE4 == 104)
      {
         totalE4 = quantidadeE4 * 1.3;
      }
      if (pedidoE4 == 105)
      {
         totalE4 = quantidadeE4 * 1.0;
      }

      printf("O valor total deu R$:%.2f \n", totalE4);

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
