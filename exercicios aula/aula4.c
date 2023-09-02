#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>
#include "funcoesAula4.c"

int main()
{
   int exercicio, num1, num2;

   int continua, contador;
   continua = 's';
   contador = 0;

   while (continua == 's')
   {
      // ---->come�o<----
      printf("O que voce gostaria de fazer \n - 1 matematica basica com 2 numeros \n 2 - tabuada de 1 numero \n 3 - fatorial de 1 numero \n 4 - 1 numero elevado a outro \n 5 - raiz quadrada de 1 numero");
      scanf("%d", exercicio);


      if (exercicio == 1)
      {
         printf("digite 2 valores: \n");
      scanf("%d%d", &num1, num2);

      printf("%d \n", soma(num1, num2));
      printf("%d \n", subt(num1, num2));
      printf("%d \n", mult(num1, num2));
      printf("%g \n", divi(num1, num2));
      }
      
      

      // ---->final<----

      printf("Repentindo....\n");

      contador++;

      printf("Tecle 's' e aguarde se deseja continuar \n");
      continua = getch();
   }

   if (contador == 0)
      printf("O bloco NAO foi repetido.");
   else
      printf("O bloco foi repetido %d vezes", contador);

   return 0;
}
