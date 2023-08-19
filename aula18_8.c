#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void main()
{

    int continua, contador;
    continua = 's';
    contador = 0;

    float temperatura;

    while (continua == 's')
    {
        temperatura = 0;
        // ---->comeco<----

        printf("Qual a temperatura?\n");
        scanf("%f", &temperatura);

        printf("%.1fº \n", temperatura);

        if (temperatura < 20)
        {
            printf("esta frio\n");
        }
        else if (temperatura > 20 && temperatura < 30)
        {
            printf("esta agradavel\n");
        }
        else if (temperatura > 30)
        {
            printf("esta quente\n");
        }
        else
        {
            printf("valor nao reconhecido, tente novamente");
        };

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
}
