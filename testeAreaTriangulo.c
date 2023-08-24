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

    int  tipoE7;
    float alturaE7, areaE7, semiPE7, lado1E7, lado2E7, lado3E7, baseE7, isoscelesAE7;

    while (continua == 's')
    {
        lado1E7 = 0.0, lado2E7 = 0.0, lado3E7 = 0.0, baseE7 = 0.0, tipoE7 = 0, isoscelesAE7 = 0.0, alturaE7 = 0.0, areaE7 = 0.0, semiPE7 = 0.0;
        // ---->come�o<----

        printf("Qual o tamanho do primeiro lado? \n");
        scanf("%f", &lado1E7);

        printf("Qual o tamanho do segundo lado? \n");
        scanf("%f", &lado2E7);

        printf("Qual o tamanho do terceiro lado? \n");
        scanf("%f", &lado3E7);

        if (lado1E7 > lado2E7 + lado3E7 || lado2E7 > lado1E7 + lado3E7 || lado3E7 > lado1E7 + lado2E7)
        {
            printf("Seu triangulo não é valido pois um dos lados é maior que a soma dos outros 2");
        };
        
        if (lado1E7 == lado2E7 == lado3E7)
        {
            // equilatero
            tipoE7 = 1;
        }
        else if (lado1E7 != lado2E7 != lado3E7)
        {
            // escaleno
            tipoE7 = 2;
        }
        else if (lado1E7 == lado2E7 != lado3E7 || lado2E7 == lado3E7 != lado1E7 || lado1E7 == lado3E7 != lado2E7)
        {
            // isosceles
            tipoE7 = 3;
        };

        baseE7 = lado1E7;

        if (baseE7 < lado2E7)
        {
            baseE7 = lado2E7;

            lado2E7 = lado1E7;
            
            isoscelesAE7 = lado2E7;
        };

        if (baseE7 < lado3E7)
        {
            baseE7 = lado3E7;

            lado3E7 = lado1E7;

            isoscelesAE7 = lado3E7;
        };



        if (tipoE7 == 1)
        {
            alturaE7 = (lado1E7 * sqrt(3)) / 2;

            areaE7 = (lado1E7 * alturaE7) / 2;

            printf("deu 1 \n");
        }
        else if (tipoE7 == 2)
        {
            semiPE7 = (float)(baseE7 + lado2E7 + lado3E7) / 2;

            printf("%d // %d // %d // %.2f \n", baseE7, lado2E7, lado3E7);

            alturaE7 = 2/baseE7 * sqrt(semiPE7 * (semiPE7 - baseE7) * (semiPE7 - lado2E7) * (semiPE7 - lado3E7));

            printf("%.2f // %.2f // %.2f // %.2f // %.2f \n", alturaE7, baseE7, semiPE7, lado2E7, lado3E7);

            areaE7 = (baseE7 * alturaE7) / 2;

            printf("%.2f // %.2f // %.2f \n", areaE7, baseE7, alturaE7);

            printf("deu 2 \n");
        }
        else if (tipoE7 == 3)
        {
            alturaE7 = sqrt(pow(isoscelesAE7, 2) - (pow(baseE7, 2)/4));

            areaE7 = (baseE7 * alturaE7) / 2;

            printf("deu 3 \n");
        };

        printf("%d // %.2f // %.2f // %.2f \n", tipoE7, semiPE7, alturaE7, areaE7);


        printf("o seu triangulo tem uma area de aproximadamente %.2f e uma altura de aproximadamente %2.f \n", areaE7, alturaE7);

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
