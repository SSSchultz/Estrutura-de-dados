#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void main()
{

    int continua, contador;
    continua = 's';
    contador = 0;

    float valor, valorJuros, juros, valorFinal, rendimento;
    int meses, mesesWhile;

    while (continua == 's')
    {

        valor = 0;
        valorJuros = 0;
        valorFinal = 0;
        juros = 0;
        rendimento = 0;
        meses = 0;
        mesesWhile = 0;

        // ---->comeco<----

        printf("qual sera o valor do deposito? \n");
        scanf("%f", &valor);

        printf("qual sera o juros? (em porcentagem e sem o simbolo)\n");
        scanf("%f", &juros);

        printf("quantos meses vai durar o envestimento? \n");
        scanf("%d", &meses);

        juros = juros / 100;
        valorFinal = valor;
        mesesWhile = meses;

        while (mesesWhile > 0)
        {
            valorJuros = valorFinal;
            valorJuros = valorJuros * juros;
            valorFinal = valorFinal + valorJuros;
            mesesWhile--;
        };

        rendimento = valorFinal - valor;

        printf("seu investimento de %.2f com juros de %.2f durante %d mes(es) deu um rendimento de %.2f e ao total %.2f \n", valor, juros, meses, rendimento, valorFinal);

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
}
