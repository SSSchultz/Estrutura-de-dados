#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void main()
{

   short continua, contador;
   continua = 's';
   contador = 0;

   int n1, n2, operacao, soma;

   while (continua == 's')
   {
      n1 = 0;
      n2 = 0;
      operacao = 0;
      soma = 0;

      // ---->come�o<----

      printf("Qual sera o primeiro numero? \n");
      scanf("%d", &n1);

      printf("Qual sera o segundo numero? \n");
      scanf("%d", &n2);

      printf("Qual sera a operacao a realizar? \n 1 - soma \n 2 - subtracao do primeiro pelo segundo \n 3 - subtracao do segundo pelo primeiro \n 4 - multiplicacao \n 5 - divicao do primeiro pelo segundo (em real) \n 6 - divicao do segundo pelo primeiro (em real) \n 7 - quociente inteiro do primeiro pelo segundo \n 8 - quociente inteiro do segundo pelo primeiro \n 9 - resto da divicao do primeiro pelo segundo \n 0 - resto da divicao do segundo pelo primeiro \n");
      scanf("%d", &operacao);

      printf("%d e %d e %d ", n1, n2, operacao);

      if (operacao == 1)
      {
         soma = n1 + n2;

         printf("\n %d + %d = %d \n", n1, n2, soma);
      };
      
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
