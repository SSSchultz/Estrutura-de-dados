#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
#include <math.h>  // https://linguagemc.com.br/a-biblioteca-math-h/
#include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm

int main()
{

    int continua, contadorLooping;
    continua = 's';
    contadorLooping = 0;

    int contadorE2, numE2, totalE2;
    float mediaE2;

    while (continua == 's')
    {
        contadorE2 = 0, numE2 = 0, totalE2 = 0, mediaE2 = 0;
        // ---->come�o<----

        printf("Qual sera o primeiro numero? \n");
        scanf("%d", &numE2);

        while (numE2 != 0)
        {
            totalE2 += numE2;

            printf("Qual sera o proximo numero? \n");
            scanf("%d", &numE2);

            contadorE2++;
        }

        mediaE2 = (float) totalE2 / contadorE2;

        printf("A media desses %d numeros e %g \n", contadorE2, mediaE2);

        // ---->final<----

        printf("Repentindo....\n");

        contadorLooping++;

        printf("Tecle 's' e aguarde se deseja continuar \n");
        continua = getch();
        sleep(1);
    }

    if (contadorLooping == 0)
        printf("O bloco NAO foi repetido.");
    else
        printf("O bloco foi repetido %d vezes", contadorLooping);

    return 0;
}
