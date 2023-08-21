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

    int lado1E7, lado2E7, lado3E7, baseE7, alturaE7, areaE7, angulo1E7, angulo2E7, angulo3E7;

    while (continua == 's')
    {
        // ---->come�o<----

        printf("Qual o tamanho do primeiro lado? \n");
        scanf("%d", &lado1E7);

        printf("Qual o tamanho do segundo lado? \n");
        scanf("%d", &lado2E7);

        printf("Qual o tamanho do terceiro lado? \n");
        scanf("%d", &lado3E7);

        printf("Qual o tamanho do primeiro angulo interno? \n");
        scanf("%d", angulo1E7);

        printf("Qual o tamanho do segundo angulo interno? \n");
        scanf("%d", angulo2E7);

        printf("Qual o tamanho do terceiro angulo interno? \n");
        scanf("%d", angulo3E7);

        if (lado1E7 > lado2E7 + lado3E7 || lado2E7 > lado1E7 + lado3E7 || lado3E7 > lado1E7 + lado2E7)
        {
            printf("Seu triangulo não é valido pois um dos lados é maior que a soma dos outros 2");
        }
        else if (angulo1E7 + angulo2E7 + angulo3E7 != 180)
        {
            printf("Seu triangulo não é valido pois a soma dos angulos internos é diferente de 180");
        }
        

        baseE7 = lado1E7;

        if (baseE7 < lado2E7)
        {
            baseE7 = lado2E7;
        }

        if (baseE7 < lado3E7)
        {
            baseE7 = lado3E7;
        };

        if (lado1E7 < lado2E7 + lado3E7 && lado2E7 < lado1E7 + lado3E7 && lado3E7 < lado1E7 + lado2E7)
        {
            alturaE7 = (lado1E7 + lado2E7 + lado3E7) / 2;

            areaE7 = (baseE7 * alturaE7) / 2;
        }
        else
        {
            
        }

        printf("%d // %d // %d // %d // %d // %d", lado1E7, lado2E7, lado3E7, baseE7, alturaE7, areaE7);

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
