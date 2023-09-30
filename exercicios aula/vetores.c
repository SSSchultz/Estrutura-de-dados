#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 5


int main()
{
    int vetorA[N], vetorB[N], vetorC[2*N];
    int i = 0, dentro, contador = 0, exercicio = 0, contador1 = 0, restoI = 0;

    srand(time(NULL));

    printf("Qual teste executar? \n");
    scanf("%d", &exercicio);

    if (exercicio == 1)
    {
        for (i = 0; i < N; i++)
        {
            vetorA[i] = rand() % 11;
            printf("%d\n", vetorA[i]);

            while (i == 4 && contador < 5)
            {
                dentro = 4 - contador;
                vetorB[contador] = vetorA[dentro];
                printf("%d\n", vetorB[contador]);
                contador++;
            }
        }
    }
    else if (exercicio == 2)
    {
        for (i = 0; i < (2*N); i++)
        {
            contador1 = i-5;
            while (contador < 5)
            {
                vetorA[contador] = rand() % 11;
                vetorB[contador] = rand() % 11;
                printf("%d // %d\n", vetorA[contador], vetorB[contador]);
                contador++;
            }

            if (i < 5)
            {
                vetorC[i] = vetorA[i];
            }
            else
            {
                vetorC[i] = vetorB[contador1];
            }
            printf("%d\n", vetorC[i]);
        }
    }
    /*else if (exercicio == 3)
    {
        for (i = 0; i < 10; i++)
        {
            contador2 = i-5;
            while (contador1 < 5)
            {
                vetorA[contador1] = rand() % 11;
                vetorB[contador1] = rand() % 11;
                printf("%d // %d\n", vetorA[contador1], vetorB[contador1]);
                contador1++;
            }

            restoI = i%2;

            if (i < 5 && restoI = 0)
            {
                vetorC[i] = vetorA[i];
            }
            else
            {
                vetorC[i] = vetorB[contador2];
            }
            printf("%d\n", vetorC[i]);
        }

    }*/
}
