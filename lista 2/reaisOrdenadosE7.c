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

    int operacaoE7;
    float num1E7, num2E7, num3E7, priE7, segE7, terE7;

    while (continua == 's')
    {
        num1E7 = 0, num2E7 = 0, num3E7 = 0, priE7 = 0, segE7 = 0, terE7 = 0;
        // ---->come�o<----

        printf("Qual operacao gostaria de realizar? \n 1 - ordem crescente \n 2 - ordem decrescente \n 3 - maior no meio \n");
        scanf("%d", &operacaoE7);

        printf("Qual sera o primeiro numero? \n");
        scanf("%f", &num1E7);

        printf("Qual sera o sgundo numero? \n");
        scanf("%f", &num2E7);

        printf("Qual sera o terceiro numero? \n");
        scanf("%f", &num3E7);

        if (operacaoE7 == 1)
        {
            if (num1E7 >= num2E7 && num1E7 >= num3E7)
            {
                terE7 = num1E7;

                if (num2E7 > num3E7)
                {
                    priE7 = num3E7;
                    segE7 = num2E7;
                }
                else
                {
                    priE7 = num2E7;
                    segE7 = num3E7;
                }
            }
            else if (num2E7 >= num1E7 && num2E7 >= num3E7)
            {
                terE7 = num2E7;

                if (num1E7 > num3E7)
                {
                    priE7 = num3E7;
                    segE7 = num1E7;
                }
                else
                {
                    priE7 = num1E7;
                    segE7 = num3E7;
                }
            }
            else if (num3E7 >= num2E7 && num3E7 >= num1E7)
            {
                terE7 = num3E7;

                if (num2E7 > num1E7)
                {
                    priE7 = num1E7;
                    segE7 = num2E7;
                }
                else
                {
                    priE7 = num2E7;
                    segE7 = num1E7;
                }
            }
        }
        else if (operacaoE7 == 2)
        {
            if (num1E7 <= num2E7 && num1E7 <= num3E7)
            {
                terE7 = num1E7;

                if (num2E7 < num3E7)
                {
                    priE7 = num3E7;
                    segE7 = num2E7;
                }
                else
                {
                    priE7 = num2E7;
                    segE7 = num3E7;
                }
            }
            else if (num2E7 <= num1E7 && num2E7 <= num3E7)
            {
                terE7 = num2E7;

                if (num1E7 < num3E7)
                {
                    priE7 = num3E7;
                    segE7 = num1E7;
                }
                else
                {
                    priE7 = num1E7;
                    segE7 = num3E7;
                }
            }
            else if (num3E7 <= num2E7 && num3E7 <= num1E7)
            {
                terE7 = num3E7;

                if (num2E7 < num1E7)
                {
                    priE7 = num1E7;
                    segE7 = num2E7;
                }
                else
                {
                    priE7 = num2E7;
                    segE7 = num1E7;
                }
            }
        }
        else if (operacaoE7 == 3)
        {
            if (num1E7 >= num2E7 && num1E7 >= num3E7)
            {
                segE7 = num1E7;

                if (num2E7 > num3E7)
                {
                    priE7 = num3E7;
                    terE7 = num2E7;
                }
                else
                {
                    priE7 = num2E7;
                    terE7 = num3E7;
                }
            }
            else if (num2E7 >= num1E7 && num2E7 >= num3E7)
            {
                segE7 = num2E7;

                if (num1E7 > num3E7)
                {
                    priE7 = num3E7;
                    terE7 = num1E7;
                }
                else
                {
                    priE7 = num1E7;
                    terE7 = num3E7;
                }
            }
            else if (num3E7 >= num2E7 && num3E7 >= num1E7)
            {
                segE7 = num3E7;

                if (num2E7 > num1E7)
                {
                    priE7 = num1E7;
                    terE7 = num2E7;
                }
                else
                {
                    priE7 = num2E7;
                    terE7 = num1E7;
                }
            }
        }
        else
        {
            printf("algo deu errado tente novamente");
        }

        printf(" %f \n %f \n %f \n", priE7, segE7, terE7);

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
