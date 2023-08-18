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

    int quantidade1, quantidade2, posicao, nota, somaNota;
    float media;

    while (continua == 's')
    {
        quantidade1 = 0;
        quantidade2 = 0;
        posicao = 1;
        media = 0;
        somaNota = 0;
        // ---->come�o<----

        printf("Quantas notas voce quer usar para fazer a media? \n");
        scanf("%d", &quantidade1);

        quantidade2 = quantidade1;

        while (quantidade1 > 0)
        {
            nota = 0;

            printf("qual sera a nota %d? \n", posicao);
            scanf("%d", &nota);

            somaNota = somaNota + nota;

            posicao++;
            quantidade1--;
        };

        media = (float)somaNota / quantidade2;

        printf("%.2f / %d / %d / %d \n", media, quantidade1, quantidade2, somaNota);
        printf("a sua media de notas e %.2f \n", media);

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
