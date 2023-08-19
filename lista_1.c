#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void main()
{
    // looping
    short continua, contador;
    continua = 's';
    contador = 0;

    // escolha de exercicio
    short exercicio;

    // exercicio 1
    int n1, n2, operacao, soma, sub, mult, divi, resto;
    float divf;

    // exercicio 2
    int quantidade1, quantidade2, posicao, nota, somaNota;
    float media;

    // exercicio 3
    float valor, valorJuros, juros, valorFinal, rendimento;
    int meses, mesesWhile;

    // exercicio 4
    float numero, numeroF;
    int numeroI, numeroA;

    // exercicio 5
    int numeroQE, quadradoElevado, elevado;
    float numeroQEresultado;

    while (continua == 's')
    {
        // iniciando variaveis
        exercicio = 0;
        n1 = 0;
        n2 = 0;
        operacao = 0;
        soma = 0;
        sub = 0;
        mult = 0;
        divf = 0;
        divi = 0;
        quantidade1 = 0;
        quantidade2 = 0;
        posicao = 1;
        media = 0;
        somaNota = 0;
        valor = 0;
        valorJuros = 0;
        valorFinal = 0;
        juros = 0;
        rendimento = 0;
        meses = 0;
        mesesWhile = 0;
        numero = 0.0;
        numeroA = 0;
        numeroF = 0.0;
        numeroI = 0;
        numeroQE = 0;
        quadradoElevado = 0;
        elevado = 0;
        numeroQEresultado = 0;

        // ---->comeco<----

        printf("Qual exercicio voce gostaria de tentar? \n 1 - operacoes matematicas com 2 numeros \n 2 - calculo de media \n 3 - calculo de juros \n 4 - reescrita de um numero real \n 5 - calcular a raiz quadrada de um numero \n 6 - transformar anos em meses, dias, horas e minutos \n 7 - calcular a area de um triangulo \n 8 - calcular a area de um circulo \n 9 - calcular a are de um trapezio \n 10 - calcular imposto de renda\n");
        scanf("%d", &exercicio);

        if (exercicio == 1)
        {
            printf("Qual sera o primeiro numero? \n");
            scanf("%d", &n1);

            printf("Qual sera o segundo numero? \n");
            scanf("%d", &n2);

            printf("Qual sera a operacao a realizar? \n 1 - soma \n 2 - subtracao do primeiro pelo segundo \n 3 - subtracao do segundo pelo primeiro \n 4 - multiplicacao \n 5 - divicao do primeiro pelo segundo (em real) \n 6 - divicao do segundo pelo primeiro (em real) \n 7 - quociente inteiro do primeiro pelo segundo \n 8 - quociente inteiro do segundo pelo primeiro \n 9 - resto da divicao do primeiro pelo segundo \n 0 - resto da divicao do segundo pelo primeiro \n");
            scanf("%d", &operacao);

            if (operacao == 1)
            {
                soma = n1 + n2;

                printf("\n %d + %d = %d \n", n1, n2, soma);
            }
            else if (operacao == 2)
            {
                sub = n1 - n2;

                printf("\n %d - %d = %d \n", n1, n2, sub);
            }
            else if (operacao == 3)
            {
                sub = n2 - n1;

                printf("\n %d - %d = %d \n", n2, n1, sub);
            }
            else if (operacao == 4)
            {
                mult = n1 * n2;

                printf("\n %d x %d = %d \n", n1, n2, mult);
            }
            else if (operacao == 5)
            {
                divf = (float)n1 / n2;

                printf("\n %d / %d = %.2f \n", n1, n2, divf);
            }
            else if (operacao == 6)
            {
                divf = (float)n2 / n1;

                printf("\n %d / %d = %.2f \n", n2, n1, divf);
            }
            else if (operacao == 7)
            {
                divi = n1 / n2;

                printf("\n %d / %d = %d \n", n1, n2, divi);
            }
            else if (operacao == 8)
            {
                divi = n2 / n1;

                printf("\n %d / %d = %d \n", n2, n1, divi);
            }
            else if (operacao == 9)
            {
                resto = n1 % n2;

                printf("\no resto de %d / %d é %d \n", n1, n2, resto);
            }
            else if (operacao == 0)
            {
                resto = n2 % n1;

                printf("\no resto de %d / %d é %d \n", n2, n1, resto);
            };
        }
        else if (exercicio == 2)
        {
            printf("Quantas notas voce quer usar para fazer a media? \n");
            scanf("%d", &quantidade1);

            quantidade2 = quantidade1;

            while (quantidade1 > 0)
            {
                nota = 0;

                printf("qual sera a nota %d? \n", posicao);
                scanf("%d", &nota);

                somaNota = somaNota + nota;

                posicao++;
                quantidade1--;
            };

            media = (float)somaNota / quantidade2;

            printf("%.2f / %d / %d / %d \n", media, quantidade1, quantidade2, somaNota);
            printf("a sua media de notas e %.2f \n", media);
        }
        else if (exercicio == 3)
        {
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
        }
        else if (exercicio == 4)
        {
            printf("Qual sera o numero real?\n");
            scanf("%f", &numero);

            numeroI = numero;
            numeroF = numero - numeroI;
            numeroA = round(numero);

            printf("o seu numero %.5f tem como a parte inteira %.d, como parte fracional %.5f e é arredondado para %d \n", numero, numeroI, numeroF, numeroA);
        }
        else if (exercicio == 5)
        {
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
}
