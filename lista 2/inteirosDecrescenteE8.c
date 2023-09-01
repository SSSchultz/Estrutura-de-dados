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

    int num1E8, num2E8, num3E8, priE8, segE8, terE8;

    while (continua == 's')
    {
        num1E8 = 0, num2E8 = 0, num3E8 = 0, priE8 = 0, segE8 = 0, terE8 = 0;

        // ---->come�o<----

        printf("Qual sera o primeiro numero? \n");
        scanf("%d", &num1E8);

        printf("Qual sera o sgundo numero? \n");
        scanf("%d", &num2E8);

        printf("Qual sera o terceiro numero? \n");
        scanf("%d", &num3E8);

        if (num1E8 >= 0 && num2E8 >= 0 && num3E8 >= 0)
        {

            if (num1E8 <= num2E8 && num1E8 <= num3E8)
            {
                terE8 = num1E8;

                if (num2E8 < num3E8)
                {
                    priE8 = num3E8;
                    segE8 = num2E8;
                }
                else
                {
                    priE8 = num2E8;
                    segE8 = num3E8;
                }
            }
            else if (num2E8 <= num1E8 && num2E8 <= num3E8)
            {
                terE8 = num2E8;

                if (num1E8 < num3E8)
                {
                    priE8 = num3E8;
                    segE8 = num1E8;
                }
                else
                {
                    priE8 = num1E8;
                    segE8 = num3E8;
                }
            }
            else if (num3E8 <= num2E8 && num3E8 <= num1E8)
            {
                terE8 = num3E8;

                if (num2E8 < num1E8)
                {
                    priE8 = num1E8;
                    segE8 = num2E8;
                }
                else
                {
                    priE8 = num2E8;
                    segE8 = num1E8;
                }
            }
        }

        printf(" %d \n %d \n %f \n", priE8, segE8, terE8);

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
