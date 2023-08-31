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

    int idadeE3;

    while (continua == 's')
    {
        // ---->come�o<----

        printf("qual a idade do nadador? \n");
        scanf("%d", &idadeE3);

        if (idadeE3 < 5)
        {
            printf("sem categoria \n");
        }
        else if (idadeE3 > 4 && idadeE3 < 8)
        {
            printf("Infantil A \n");
        }
        else if (idadeE3 > 7 && idadeE3 < 11)
        {
            printf("Infantil B \n");
        }
        else if (idadeE3 > 10 && idadeE3 < 14)
        {
            printf("Juvenil  A \n");
        }
        else if (idadeE3 > 13 && idadeE3 < 18)
        {
            printf("Juvenil  B \n");
        }
        else if (idadeE3 > 17)
        {
            printf("Adulto \n");
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
