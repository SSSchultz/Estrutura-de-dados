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

    float baseMaiorE9, baseMenorE9, alturaE9, areaE9;

    while (continua == 's')
    {
        baseMaiorE9 = 0.0, baseMenorE9 = 0.0, alturaE9 = 0.0, areaE9 = 0.0;
        // ---->come�o<----

        printf("Qual o tamanho da base maior?\n");
        scanf("%f", &baseMaiorE9);

        printf("Qual o tamanho da base menor?\n");
        scanf("%f", &baseMenorE9);

        printf("Qual o valor da altura?\n");
        scanf("%f", &alturaE9);

        areaE9 = ((baseMaiorE9 + baseMenorE9) * alturaE9) / 2;

        printf("A area do seu trapézio é aproximadamente %.2f \n", areaE9);

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
