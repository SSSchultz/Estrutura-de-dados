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

    int numeroQE, quadradoElevado, elevado;
    float numeroQEresultado;

    while (continua == 's')
    {
        numeroQE = 0;
        quadradoElevado = 0;
        elevado = 0;
        numeroQEresultado = 0;
        // ---->come�o<----

        printf("Qual sera o numero? \n");
        scanf("%d", &numeroQE);

        printf("qual sera a operacao que voce deseja realizar? \n 1 - Raiz quadrada \n 2 - Elevado\n");
        scanf("%d", &quadradoElevado);

        if (quadradoElevado == 1)
        {
            numeroQEresultado = sqrt(numeroQE);

            printf("a raiz quadrada de %d é %f\n", numeroQE, numeroQEresultado);
        }
        else if (quadradoElevado == 2)
        {
            printf("voce gostaria de elevar o numero %d a qual potencia?\n", numeroQE);
            scanf("%d", &elevado);

            numeroQEresultado = pow(numeroQE, elevado);

            printf("%d elevado a %d potencia é equivalente a %.f\n", numeroQE, elevado, numeroQEresultado);
        }
        else
        {
            printf("comando não reconhecido tente novamente\n");
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

    return 0;
}
