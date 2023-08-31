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

   int comprarE6, produtoE6, quantidadeE6, totalProdutosE6;
   float totalE6;

   while (continua == 's')
   {
      comprarE6 = 's', totalE6 = 0.0, totalProdutosE6 = 0;

      // ---->come�o<----

      while (comprarE6 == 's')
      {
         produtoE6 = 0, quantidadeE6 = 0;

         printf("o que voce gostaria de comprar? \n 1001 - pizza Sadia \n 1324 - Coca-cola 2L \n 6548 - Barra de chocolate laka \n 0987 - Pepsi twist 2L \n 7623 - Cartela de ovo \n");
         scanf("%d", &produtoE6);

         printf("quantos unidades voce gostaria de comprar? \n");
         scanf("%d", &quantidadeE6);

         if (produtoE6 == 1001)
         {
            totalE6 += quantidadeE6 * 5.32;

            totalProdutosE6 += quantidadeE6;
         }
         else if (produtoE6 == 1324)
         {
            totalE6 += quantidadeE6 * 6.45;

            totalProdutosE6 += quantidadeE6;
         }
         else if (produtoE6 == 6548)
         {
            totalE6 += quantidadeE6 * 2.37;
            
            totalProdutosE6 += quantidadeE6;
         }
         else if (produtoE6 == 987)
         {
            totalE6 += quantidadeE6 * 5.32;
            
            totalProdutosE6 += quantidadeE6;
         }
         else if (produtoE6 == 7623)
         {
            totalE6 += quantidadeE6 * 6.45;
            
            totalProdutosE6 += quantidadeE6;
         }

         printf("Tecle S e aguarde se deseja comprar algo mais \n");
         comprarE6 = getch();
      }

      printf("O total a pagar nos %d produtos comprados e de R$%.2f", totalProdutosE6, totalE6);

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
