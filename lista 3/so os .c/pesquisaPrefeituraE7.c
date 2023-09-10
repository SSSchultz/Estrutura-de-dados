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

   float salarioE7, maiorSalarioE7, salarioTotalE7, mediaSalarioE7, porcentagemSalarioE7, mediaFilhosE7;
   int filhosE7, contadorSalarioE7, contadorE7, filhosTotalE7;

   while (continua == 's')
   {
      filhosE7 = 0, contadorSalarioE7 = 0, contadorE7 = 0, filhosTotalE7 = 0, salarioE7 = 0, maiorSalarioE7 = 0, salarioTotalE7 = 0, mediaSalarioE7 = 0, porcentagemSalarioE7 = 0, mediaFilhosE7 = 0;
      // ---->come�o<----

      while (salarioE7 >= 0)
      {
         printf("Qual o seu salario? \n");
         scanf("%f", &salarioE7);

         if (salarioE7 < 0)
         {
            break;
         }

         printf("Quantos filhos você tem? \n");
         scanf("%d", &filhosE7);

         if (salarioE7 > maiorSalarioE7)
         {
            maiorSalarioE7 = salarioE7;
         }

         if (salarioE7 < 101)
         {
            contadorSalarioE7++;
         }
         

         salarioTotalE7 += salarioE7;
         filhosTotalE7 += filhosE7;
         contadorE7++;
      }

      mediaSalarioE7 = salarioTotalE7 / contadorE7;
      mediaFilhosE7 = (float) filhosTotalE7 / contadorE7;
      porcentagemSalarioE7 = (float) ( contadorSalarioE7 * 100 ) / contadorE7;

      printf("A media de salario da populacao e %.2f \nA media de filhos da populacao e %.1f \nO maior salario e %.2f \nA porcentagem de pessoas com salario de ate R$100 e %.2f", mediaSalarioE7, mediaFilhosE7, maiorSalarioE7, porcentagemSalarioE7);





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
