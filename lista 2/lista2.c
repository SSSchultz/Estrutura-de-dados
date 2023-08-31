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

    // repetição
    int exercicio;

    // exercicio 1
    int num1E1, num2E1, num3E1, maiorE1;

    // exercicio 2
    int num1E2, num2E2, res1E2, res2E2;

    // exercicio 3
    int idadeE3;

    // exercicio 4
    int pedidoE4, quantidadeE4;
    float totalE4;

    // exercicio 5
    float alturaE5, idealE5;
    char sexoE5;

    // exercicio 6
    int comprarE6, produtoE6, quantidadeE6, totalProdutosE6;
    float totalE6;

    while (continua == 's')
    {
        exercicio = 0;
        num1E1 = 0, num2E1 = 0, num3E1 = 0;
        num1E2 = 0, num2E2 = 0, res1E2 = 0, res2E2 = 0;
        idadeE3 = 0;
        pedidoE4 = 0, quantidadeE4 = 0, totalE4 = 0.0;
        alturaE5 = 0.0, idealE5 = 0.0, sexoE5 = '0';
        comprarE6 = 's', totalE6 = 0.0, totalProdutosE6 = 0;

        // ---->come�o<----

        printf("Qual operacao voce gostaria de tentar? \n 1 - encontrar o maior entre 3 valores \n 2 - multiplos ou nao \n 3 - classificacao idade \n 4 - cardapio de lanchonete \n 5 - peso ideal \n 6 - simulacao de compra \n 7 - ordenar varios numeros reais \n 8 - ordenar 3 numeros inteiros \n 9 - transformar uma idade em dia \n 0 - transformar dias em idade \n");
        scanf("%d", &exercicio);

        if (exercicio == 1)
        {
            printf("Qual o primeiro valor? \n");
            scanf("%d", &num1E1);

            printf("Qual o segundo valor? \n");
            scanf("%d", &num2E1);

            printf("Qual o terceiro valor? \n");
            scanf("%d", &num3E1);

            maiorE1 = num1E1;

            if (maiorE1 < num2E1)
            {
                maiorE1 = num2E1;
            }

            if (maiorE1 < num3E1)
            {
                maiorE1 = num3E1;
            }

            printf("dentre os numeros %d, %d, %d o maior e %d \n", num1E1, num2E1, num3E1, maiorE1);
        }
        else if (exercicio == 2)
        {
            printf("Qual sera o primeiro numero? \n");
            scanf("%d", &num1E2);

            printf("Qual sera o segundo numero? \n");
            scanf("%d", &num2E2);

            res1E2 = num1E2 % num2E2;
            res2E2 = num2E2 % num1E2;

            if (res1E2 == 0 || res2E2 == 0)
            {
                printf("sao multiplos \n");
            }
            else
            {
                printf("nao sao multiplos \n");
            }
        }
        else if (exercicio == 3)
        {
            printf("qual a idade do nadador? \n");
            scanf("%d", &idadeE3);

            if (idadeE3 < 5)
            {
                printf("sem categoria \n");
            }
            else if (idadeE3 > 4 && idadeE3 < 8)
            {
                printf("Infantil A \n");
            }
            else if (idadeE3 > 7 && idadeE3 < 11)
            {
                printf("Infantil B \n");
            }
            else if (idadeE3 > 10 && idadeE3 < 14)
            {
                printf("Juvenil  A \n");
            }
            else if (idadeE3 > 13 && idadeE3 < 18)
            {
                printf("Juvenil  B \n");
            }
            else if (idadeE3 > 17)
            {
                printf("Adulto \n");
            }
        }
        else if (exercicio == 4)
        {
            printf("O que voce gostaria de pedir? \n 100 - Cachorro quente \n 101 - Bauru simples \n 102 - Bauru com ovo \n 103 - Hamburger \n 104 - Cheeseburger \n 105 - Refrigerante \n");
            scanf("%d", &pedidoE4);

            printf("Quantos voce gostaria? \n");
            scanf("%d", &quantidadeE4);

            if (pedidoE4 == 100)
            {
                totalE4 = quantidadeE4 * 1.2;
            }
            if (pedidoE4 == 101)
            {
                totalE4 = quantidadeE4 * 1.3;
            }
            if (pedidoE4 == 102)
            {
                totalE4 = quantidadeE4 * 1.5;
            }
            if (pedidoE4 == 103)
            {
                totalE4 = quantidadeE4 * 1.2;
            }
            if (pedidoE4 == 104)
            {
                totalE4 = quantidadeE4 * 1.3;
            }
            if (pedidoE4 == 105)
            {
                totalE4 = quantidadeE4 * 1.0;
            }

            printf("O valor total deu R$:%.2f \n", totalE4);
        }
        else if (exercicio == 5)
        {
            printf("Qual o sexo da pessoa? \n F - Feminino \n M - Masculino \n");
            scanf("%c", &sexoE5);

            printf("Qual a altura da pessoa? (em metros)\n");
            scanf("%f", &alturaE5);

            sexoE5 = toupper(sexoE5);

            printf("%c \n", sexoE5);

            if (sexoE5 == 'F')
            {
                idealE5 = (62.1 * alturaE5) - 44.7;
            }
            else if (sexoE5 == 'M')
            {
                idealE5 = (72.7 * alturaE5) - 58;
            }
            else
            {
                printf("Algum dado foi inserido de forma incorreta tente novamente");
            }

            printf("O peso ideal dessa pessoa e aproximadamente %.2f \n", idealE5);
        }
        else if (exercicio == 6)
        {
            while (comprarE6 == 's')
            {
                produtoE6 = 0, quantidadeE6 = 0;

                printf("o que voce gostaria de comprar? \n 1001 - pizza Sadia \n 1324 - Coca-cola 2L \n 6548 - Barra de chocolate laka \n 0987 - Pepsi twist 2L \n 7623 - Cartela de ovo \n");
                scanf("%d", &produtoE6);

                printf("quantos unidades voce gostaria de comprar? \n");
                scanf("%d", &quantidadeE6);

                if (produtoE6 == 1001)
                {
                    totalE6 += quantidadeE6 * 5.32;

                    totalProdutosE6 += quantidadeE6;
                }
                else if (produtoE6 == 1324)
                {
                    totalE6 += quantidadeE6 * 6.45;

                    totalProdutosE6 += quantidadeE6;
                }
                else if (produtoE6 == 6548)
                {
                    totalE6 += quantidadeE6 * 2.37;

                    totalProdutosE6 += quantidadeE6;
                }
                else if (produtoE6 == 987)
                {
                    totalE6 += quantidadeE6 * 5.32;

                    totalProdutosE6 += quantidadeE6;
                }
                else if (produtoE6 == 7623)
                {
                    totalE6 += quantidadeE6 * 6.45;

                    totalProdutosE6 += quantidadeE6;
                }

                printf("Tecle S e aguarde se deseja comprar algo mais \n");
                comprarE6 = getch();
            }

            printf("O total a pagar nos %d produtos comprados e de R$%.2f", totalProdutosE6, totalE6);
        }

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
