#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
#include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm

int main()
{

    int continua, contadorLooping;
    continua = 's';
    contadorLooping = 0;

    int num1E8, num2E8, divisorE8, somaE8, totalE8, restoSomaE8;
    float mediaTotalE8;

    while (continua == 's')
    {
        num1E8 = 0, num2E8 = 0, divisorE8 = 0, somaE8 = 0, totalE8 = 0, restoSomaE8 = 0, mediaTotalE8 = 0;
        // ---->come�o<----

        printf("Qual o primeiro numero? \n");
        scanf("%d", &num1E8);

        printf("Qual o ultimo numero? \n");
        scanf("%d", &num2E8);

        divisorE8 = num2E8 - num1E8;

        somaE8 = num2E8 + num1E8;

        restoSomaE8 = somaE8 % 2;

        if (restoSomaE8 == 0)
        {
            totalE8 = (somaE8 * ((divisorE8 / 2) + 0.5)) - somaE8;
        }
        else
        {
            totalE8 = (somaE8 * ((divisorE8 / 2) + 1)) - somaE8;
        }

        mediaTotalE8 = (float)totalE8 / (divisorE8 - 1);
        
        printf("a media dos numeros entre %d e %d = %g", num1E8, num2E8, mediaTotalE8);

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
