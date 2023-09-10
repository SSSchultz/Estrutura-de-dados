//10. Escrever um algoritmo que lê 10 valores, um de cada vez, e conta quantos deles estão no intervalo [10,20] e quantos deles estão fora do intervalo, escrevendo estas informações.

#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
#include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm



int main() {

int continua, contadorLooping;
continua = 's';
contadorLooping = 0;

int totalValoresE0, valorE0, dentroIntervaloE0, foraIntervaloE0, menorIntervaloE0, maiorIntervaloE0;

while (continua == 's')
{
    totalValoresE0 = 0, valorE0 = 0, dentroIntervaloE0 = 0, foraIntervaloE0 = 0, menorIntervaloE0 = 0, maiorIntervaloE0 = 0;
     // ---->come�o<----

   printf("Quantos valores voce gostaria de inserir? \n");
   scanf("%d", &totalValoresE0);

   printf("Qual sera o menor valor do intervalo? \n");
   scanf("%d", &menorIntervaloE0);

   printf("Qual sera o maior valor do intervalo? \n");
   scanf("%d", &maiorIntervaloE0);
   
   for (int i = 1; i <= totalValoresE0; i++)
   {
        printf("Qual sera o %dº valor: ", i);
        scanf("%d", &valorE0);

        if (valorE0 >= menorIntervaloE0 && valorE0 <= maiorIntervaloE0)
        {
            dentroIntervaloE0++;
        }
        else
        {
            foraIntervaloE0++;
        }
   }

   printf("Dos valores digitados \n %d estao dentro do intervalo de %d a %d \n %d estao fora do intervalo", dentroIntervaloE0, menorIntervaloE0, maiorIntervaloE0, foraIntervaloE0);
   

    // ---->final<----

   printf("Repentindo....\n");

   contadorLooping++;

   printf("Tecle 's' e aguarde se deseja continuar \n");
   continua = getch();
   sleep(1);
}

if (contadorLooping == 0)
   printf("O bloco NAO foi repetido.");
else printf("O bloco foi repetido %d vezes", contadorLooping);

return 0;
}
