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

    int tipo, multiplicando, multiplicador, produto, fatorial1, fatorial2, fatorialResultado;

    while (continua == 's')
    {

        tipo = 0, multiplicando = 0, multiplicador = 0, produto = 0, fatorial1 = 0, fatorial2 = 0, fatorialResultado = 0;
        // ---->come�o<----

        printf("Qual operacao deseja realizar? \n 1 - Tabuada \n 2 - Fatorial \n");
        scanf("%d", &tipo);

        if (tipo == 1)
        {
            printf("gostaria de fazer a tabuada de qual numero? \n");
            scanf("%d", &multiplicando);

            while (multiplicador < 10)
            {
                produto = multiplicando * multiplicador;
                printf("%d x %d = %d \n", multiplicando, multiplicador, produto);

                multiplicador++;
            }
        }
        else if (tipo == 2)
        {
            printf("gostaria de ver qual numero fatorial? \n");
            scanf("%d", &fatorial1);

            fatorial2 = fatorial1 - 1;

            fatorialResultado = fatorial1 * fatorial2;

            while (fatorial2 > 1)
            {
                fatorial2--;
                fatorialResultado = fatorialResultado * fatorial2;
            }

            printf("%d fatorial é = %d \n", fatorial1, fatorialResultado);
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
