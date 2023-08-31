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

    int num1E1, num2E1, num3E1, maiorE1;

    while (continua == 's')
    {
        // ---->come�o<----

        printf("Qual o primeiro valor? \n");
        scanf("%d", &num1E1);

        printf("Qual o segundo valor? \n");
        scanf("%d", &num2E1);

        printf("Qual o terceiro valor? \n");
        scanf("%d", &num3E1);

        maiorE1 = num1E1;

        if (maiorE1 < num2E1)
        {
            maiorE1 = num2E1;
        }

        if (maiorE1 < num3E1)
        {
            maiorE1 = num3E1;
        }

        printf("dentre os numeros %d, %d, %d o maior e %d \n", num1E1, num2E1, num3E1, maiorE1);

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
