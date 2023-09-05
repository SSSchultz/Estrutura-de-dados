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

    int numE3, contador0E3, contador26E3, contador51E3, contador76E3, foraEscopo;

    while (continua == 's')
    {
        numE3 = 0, contador0E3 = 0, contador26E3 = 0, contador51E3 = 0, contador76E3 = 0, foraEscopo = 0;
        // ---->come�o<----
        do
        {
            printf("Qual sera o numero? \n");
            scanf("%d", &numE3);

            if (numE3 > -1 && numE3 < 101)
            {
                if (numE3 < 26)
                {
                    contador0E3++;
                }
                else if (numE3 < 51)
                {
                    contador26E3++;
                }
                else if (numE3 < 76)
                {
                    contador51E3++;
                }
                else if (numE3 < 101)
                {
                    contador76E3++;
                }
            }
            else if (numE3 < 0 || numE3 > 100)
            {
                foraEscopo++;
            }
        } while (numE3 >= 0);

        printf("Dos numeros digitados \n %d - estavam de 0 a 25 \n %d - estavam de 26 a 50 \n %d - estavam de 51 a 75 \n %d - estavam de 76 a 100 \n %d - estavam fora do escopo \n", contador0E3, contador26E3, contador51E3, contador76E3, foraEscopo);

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
