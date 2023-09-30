#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define A 5
#define B 5
#define C 5

int main()
{
    int vetorA[A], vetorB[B], vetorC[C];
    int i = 0, dentro, contador = 0, exercicio = 0, contador1 = 0, contador2 = 0, restoI = 0, contador3 = 0, contador4 = 0;

    srand(time(NULL));

    printf("Qual teste executar? \n");
    scanf("%d", &exercicio);

    if (exercicio == 1)
    {
        for (i = 0; i < A; i++)
        {
            vetorA[i] = rand() % 11;
            vetorB[i] = vetorA[4-i];
            printf("%d // %d\n", vetorA[i], vetorB[i]);
        }
    }
}
