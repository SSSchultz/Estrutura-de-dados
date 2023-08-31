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

    int operacao;
    float num1, num2, num3, pri, seg, ter;

    while (continua == 's')
    {
        // ---->come�o<----

        printf("Qual operacao gostaria de realizar? \n 1 - ordem crescente \n 2 - ordem decrescent \n 3 - maior no meio \n");
        scanf("%d", &operacao);

        printf("Qual sera o primeiro numero? \n");
        scanf("%f", &num1);

        printf("Qual sera o sgundo numero? \n");
        scanf("%f", &num2);

        printf("Qual sera o terceiro numero? \n");
        scanf("%f", &num3);

        pri = num1;
        seg = num1;
        ter = num1;

        if (operacao == 1)
            
            if (pri > num1)
            {
                pri = num1;
            }

            if (pri > num2)
            {
                pri = num2;
            }

            if (pri > num3)
            {
                pri = num3;
            }

            if (seg > num1)
            {
                seg = num1;
            }

            if (seg > num2)
            {
                seg = num2;
            }

            if (seg > num3)
            {
                seg = num3;
            }

            if (ter > num1)
            {
                ter = num1;
            }

            if (ter > num2)
            {
                ter = num2;
            }

            if (ter > num3)
            {
                ter = num3;
            }

        }

        printf(" %f \n %f \n %f", pri, seg, ter);

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
