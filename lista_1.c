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
    int n1E1, n2E1, operacaoE1, somaE1, subE1, multE1, diviE1, restoE1;
    float divfE1;

    // exercicio 2
    int quantidade1E2, quantidade2E2, posicaoE2, notaE2, somaNotaE2;
    float mediaE2;

    // exercicio 3
    float valorE3, valorJurosE3, jurosE3, valorFinalE3, rendimentoE3;
    int mesesE3, mesesWhileE3;

    // exercicio 4
    float numeroE4, numeroFE4;
    int numeroIE4, numeroAE4;

    // exercicio 5
    int numeroQEE5, quadradoElevadoE5, elevadoE5;
    float numeroQEresultadoE5;

    // exercicio 6
    int idadeE6, idadeE62, mesesE6, diasE6, horasE6, minutosE6;

    while (continua == 's')
    {
        // iniciando variaveis
        exercicio = 0, n1E1 = 0, n2E1 = 0, operacaoE1 = 0, somaE1 = 0, subE1 = 0, multE1 = 0, divfE1 = 0, diviE1 = 0, restoE1 = 0;

        quantidade1E2 = 0, quantidade2E2 = 0, posicaoE2 = 1, mediaE2 = 0, notaE2 = 0, somaNotaE2 = 0;

        valorE3 = 0, valorJurosE3 = 0, valorFinalE3 = 0, jurosE3 = 0, rendimentoE3 = 0, mesesE3 = 0, mesesWhileE3 = 0;

        numeroE4 = 0.0, numeroAE4 = 0, numeroFE4 = 0.0, numeroIE4 = 0;

        numeroQEE5 = 0, quadradoElevadoE5 = 0, elevadoE5 = 0, numeroQEresultadoE5 = 0;

        idadeE6 = 0, idadeE62 = 0, mesesE6 = 0, diasE6 = 0, horasE6 = 0, minutosE6 = 0;

        // ---->comeco<----

        printf("Qual exercicio voce gostaria de tentar? \n 1 - operacoes matematicas com 2 numeros \n 2 - calculo de media \n 3 - calculo de juros \n 4 - reescrita de um numero real \n 5 - calcular a raiz quadrada ou elevar um numero \n 6 - transformar anos em meses, dias, horas e minutos \n 7 - calcular a area de um triangulo \n 8 - calcular a area de um circulo \n 9 - calcular a are de um trapezio \n 10 - calcular imposto de renda\n");
        scanf("%d", &exercicio);

        if (exercicio == 1)
        {
            printf("Qual sera o primeiro numero? \n");
            scanf("%d", &n1E1);

            printf("Qual sera o segundo numero? \n");
            scanf("%d", &n2E1);

            printf("Qual sera a operacao a realizar? \n 1 - soma \n 2 - subtracao do primeiro pelo segundo \n 3 - subtracao do segundo pelo primeiro \n 4 - multiplicacao \n 5 - divicao do primeiro pelo segundo (em real) \n 6 - divicao do segundo pelo primeiro (em real) \n 7 - quociente inteiro do primeiro pelo segundo \n 8 - quociente inteiro do segundo pelo primeiro \n 9 - resto da divicao do primeiro pelo segundo \n 0 - resto da divicao do segundo pelo primeiro \n");
            scanf("%d", &operacaoE1);

            if (operacaoE1 == 1)
            {
                somaE1 = n1E1 + n2E1;

                printf("\n %d + %d = %d \n", n1E1, n2E1, somaE1);
            }
            else if (operacaoE1 == 2)
            {
                subE1 = n1E1 - n2E1;

                printf("\n %d - %d = %d \n", n1E1, n2E1, subE1);
            }
            else if (operacaoE1 == 3)
            {
                subE1 = n2E1 - n1E1;

                printf("\n %d - %d = %d \n", n2E1, n1E1, subE1);
            }
            else if (operacaoE1 == 4)
            {
                multE1 = n1E1 * n2E1;

                printf("\n %d x %d = %d \n", n1E1, n2E1, multE1);
            }
            else if (operacaoE1 == 5)
            {
                divfE1 = (float)n1E1 / n2E1;

                printf("\n %d / %d = %.2f \n", n1E1, n2E1, divfE1);
            }
            else if (operacaoE1 == 6)
            {
                divfE1 = (float)n2E1 / n1E1;

                printf("\n %d / %d = %.2f \n", n2E1, n1E1, divfE1);
            }
            else if (operacaoE1 == 7)
            {
                diviE1 = n1E1 / n2E1;

                printf("\n %d / %d = %d \n", n1E1, n2E1, diviE1);
            }
            else if (operacaoE1 == 8)
            {
                diviE1 = n2E1 / n1E1;

                printf("\n %d / %d = %d \n", n2E1, n1E1, diviE1);
            }
            else if (operacaoE1 == 9)
            {
                restoE1 = n1E1 % n2E1;

                printf("\no resto de %d / %d é %d \n", n1E1, n2E1, restoE1);
            }
            else if (operacaoE1 == 0)
            {
                restoE1 = n2E1 % n1E1;

                printf("\no resto de %d / %d é %d \n", n2E1, n1E1, restoE1);
            };
        }
        else if (exercicio == 2)
        {
            printf("Quantas notas voce quer usar para fazer a media? \n");
            scanf("%d", &quantidade1E2);

            quantidade2E2 = quantidade1E2;

            while (quantidade1E2 > 0)
            {
                notaE2 = 0;

                printf("qual sera a nota %d? \n", posicaoE2);
                scanf("%d", &notaE2);

                somaNotaE2 = somaNotaE2 + notaE2;

                posicaoE2++;
                quantidade1E2--;
            };

            mediaE2 = (float)somaNotaE2 / quantidade2E2;

            printf("a sua media de notas e %.2f \n", mediaE2);
        }
        else if (exercicio == 3)
        {
            printf("qual sera o valor do deposito? \n");
            scanf("%f", &valorE3);

            printf("qual sera o juros? (em porcentagem e sem o simbolo)\n");
            scanf("%f", &jurosE3);

            printf("quantos meses vai durar o investimento? \n");
            scanf("%d", &mesesE3);

            jurosE3 = jurosE3 / 100;
            valorFinalE3 = valorE3;
            mesesWhileE3 = mesesE3;

            while (mesesWhileE3 > 0)
            {
                valorJurosE3 = valorFinalE3;
                valorJurosE3 = valorJurosE3 * jurosE3;
                valorFinalE3 = valorFinalE3 + valorJurosE3;
                mesesWhileE3--;
            };

            rendimentoE3 = valorFinalE3 - valorE3;

            printf("seu investimento de %.2f com juros de %.2f durante %d mes(es) deu um rendimento de %.2f e ao total %.2f \n", valorE3, jurosE3, mesesE3, rendimentoE3, valorFinalE3);
        }
        else if (exercicio == 4)
        {
            printf("Qual sera o numero real?\n");
            scanf("%f", &numeroE4);

            numeroIE4 = numeroE4;
            numeroFE4 = numeroE4 - numeroIE4;
            numeroAE4 = round(numeroE4);

            printf("o seu numero %.5f tem como a parte inteira %.d, como parte fracional %.5f e é arredondado para %d \n", numeroE4, numeroIE4, numeroFE4, numeroAE4);
        }
        else if (exercicio == 5)
        {
            printf("Qual sera o numero? \n");
            scanf("%d", &numeroQEE5);

            printf("qual sera a operacao que voce deseja realizar? \n 1 - Raiz quadrada \n 2 - Elevado\n");
            scanf("%d", &quadradoElevadoE5);

            if (quadradoElevadoE5 == 1)
            {
                numeroQEresultadoE5 = sqrt(numeroQEE5);

                printf("a raiz quadrada de %d é %f\n", numeroQEE5, numeroQEresultadoE5);
            }
            else if (quadradoElevadoE5 == 2)
            {
                printf("voce gostaria de elevar o numero %d a qual potencia?\n", numeroQEE5);
                scanf("%d", &elevadoE5);

                numeroQEresultadoE5 = pow(numeroQEE5, elevadoE5);

                printf("%d elevado a %d potencia é equivalente a %.f\n", numeroQEE5, elevadoE5, numeroQEresultadoE5);
            }
            else
            {
                printf("comando não reconhecido tente novamente\n");
            };
        }
        else if (exercicio == 6)
        {
            printf("Qual a sua idade?\n");
            scanf("%d", &idadeE6);

            mesesE6 = idadeE6 * 12;

            diasE6 = idadeE6 * 365;

            idadeE62 = idadeE6;

            while (idadeE62 > 0)
            {
                diasE6++;
                idadeE62 = idadeE62 - 4;
            };

            horasE6 = diasE6 * 24;

            minutosE6 = horasE6 * 60;

            printf("voce tem %d anos ou %d meses ou %d dias ou %d horas ou %d minutos\n", idadeE6, mesesE6, diasE6, horasE6, minutosE6);
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
