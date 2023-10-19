#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
#include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
// #include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm

int main()
{

    int continua, contadorLooping;
    continua = 's';
    contadorLooping = 0;

    float valorAE3, valorBE3, valorCE3, deltaE3, x1E3, x2E3;

    while (continua == 's')
    {
        valorAE3 = 0, valorBE3 = 0, valorCE3 = 0, deltaE3 = 0, x1E3 = 0, x2E3 = 0;
        // ---->come�o<----

        printf("Qual é o valor de A?\n");
        scanf("%g", &valorAE3);

        printf("Qual é o valor de B?\n");
        scanf("%g", &valorBE3);

        printf("Qual é o valor de C?\n");
        scanf("%g", &valorCE3);

        while (valorAE3 = 0)
        {
            printf("O valor de A deve ser diferente de 0");

            printf("Qual é o valor de A?\n");
            scanf("%g", &valorAE3);
        }

        deltaE3 = (valorBE3 * valorBE3) + (-4 * valorAE3 * valorCE3);

        if (deltaE3 >= 0)
        {
            x1E3 = (- valorBE3 + sqrt(deltaE3)) / (2*valorAE3);

            x2E3 = (- valorBE3 + sqrt(deltaE3)) / (2*valorAE3);
        }
        else {

            //   ?


        }

        printf("As raizes são %g e %g", x1E3, x2E3);
        

        printf("O valor de Delta e %g \n", deltaE3);
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
