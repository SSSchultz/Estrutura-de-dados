#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



int main() {

int continua, contador;
continua = 's';
contador = 0;

float salarioE10, impostoE10;

while (continua == 's')
{
    salarioE10 = 0.0, impostoE10 = 0.0;
     // ---->come�o<----

printf("Qual o valor do Salario?\n");
scanf("%F", &salarioE10);

impostoE10 = salarioE10 * 0.05;

printf("Para um salario de %.2f sera cobrado um imposto de renda de %.2f \n", salarioE10, impostoE10);

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
