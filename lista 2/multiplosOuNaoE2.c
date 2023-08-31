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

    int num1E2, num2E2, res1E2, res2E2;

    while (continua == 's')
    {
        num1E2 = 0, num2E2 = 0, res1E2 = 0, res2E2 = 0;

        // ---->come�o<----

        printf("Qual sera o primeiro numero? \n");
        scanf("%d", &num1E2);

        printf("Qual sera o segundo numero? \n");
        scanf("%d", &num2E2);

        res1E2 = num1E2 % num2E2;
        res2E2 = num2E2 % num1E2;

        if (res1E2 == 0 || res2E2 == 0)
        {
            printf("sao multiplos \n");
        }
        else
        {
            printf("nao sao multiplos \n");
        }

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
