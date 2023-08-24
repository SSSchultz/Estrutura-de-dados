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

    float diametroE8, raioE8, areaE8;

    while (continua == 's')
    {
        diametroE8 = 0.0, raioE8 = 0.0, areaE8 = 0.0;

        // ---->come�o<----

        printf("Qual o diametro do circulo? \n");
        scanf("%f", &diametroE8);

        raioE8 = diametroE8 / 2;

        areaE8 = 3.1415 * (pow(raioE8, 2));

        printf("a area do seu circulo é aproximadamente %.2f (considerando pi = 3.1415) \n", areaE8);
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
