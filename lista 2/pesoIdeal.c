#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>



int main() {

int continua, contador;
continua = 's';
contador = 0;

float alturaE5, idealE5;
char sexoE5;

while (continua == 's')
{
    alturaE5 = 0.0, idealE5 = 0.0, sexoE5 = '0';
     // ---->come�o<----

    printf("Qual o sexo da pessoa? \n F - Feminino \n M - Masculino \n");
    scanf("%c", &sexoE5);

    printf("Qual a altura da pessoa? (em metros)\n");
    scanf("%f", &alturaE5);

    sexoE5 = toupper(sexoE5);

    printf("%c \n", sexoE5);

    if (sexoE5 == 'F')
    {
        idealE5 = (62.1 * alturaE5) - 44.7;
    }
    else if (sexoE5 == 'M')
    {
        idealE5 = (72.7 * alturaE5) - 58;
    }
    else
    {
        printf("Algum dado foi inserido de forma incorreta tente novamente");
    }

    printf("O peso ideal dessa pessoa e aproximadamente %.2f \n", idealE5);
    
    

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
