#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
#include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm

int main()
{

   int continua, contadorLooping;
   continua = 's';
   contadorLooping = 0;

   int num1E9, num2E9, restoE9;

   while (continua == 's')
   {
      num1E9 = 0, num2E9 = 0, restoE9 = 0;
      
      // ---->come�o<----

      printf("Qual o primeiro numero? \n");
      scanf("%d", &num1E9);

      printf("qual o ultimo numero? \n");
      scanf("%d", &num2E9);

      for (int i = num1E9; i < num2E9; i++)
      {
         restoE9 = i % 2;

         if (restoE9 != 0)
         {
            printf("%d, ", i);
         }
         
      }
      
      // ---->final<----

      printf("Repentindo....\n");

      contadorLooping++;

      printf("Tecle 's' e aguarde se deseja continuar \n");
      continua = getch();
      sleep(1);
   }

   if (contadorLooping == 0)
      printf("O bloco NAO foi repetido.");
   else
      printf("O bloco foi repetido %d vezes", contadorLooping);

   return 0;
}
