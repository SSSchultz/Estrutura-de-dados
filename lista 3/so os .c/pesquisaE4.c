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

    int idadeE4, menorIdadeE4, maiorIdadeE4, salarioMulherE4;
    float salarioE4, salarioTotalE4, mediaSalarioE4;
    char sexoE4;

    while (continua == 's')
    {
        idadeE4 = 0, menorIdadeE4 = 1000, maiorIdadeE4 = 0, salarioE4 = 0, salarioMulherE4 = 0, salarioTotalE4 = 0, mediaSalarioE4 = 0, sexoE4 = 0;
        // ---->come�o<----

        for (int pessoaE4 = 1; pessoaE4 <= 15; pessoaE4++)
        {
            printf("Qual o sexo da pessoa %d? \n M - Masculino \n F - Feminino \n", pessoaE4);
            scanf(" %c", &sexoE4);

            printf("Qual o salario da pessoas %d? \n", pessoaE4);
            scanf("%f", &salarioE4);

            printf("Qual a idade da pessoas %d? \n", pessoaE4);
            scanf("%d", &idadeE4);

            sexoE4 =  toupper(sexoE4);

            salarioTotalE4 += salarioE4;

            if (idadeE4 < menorIdadeE4)
            {
                menorIdadeE4 = idadeE4;
            }
            else if (idadeE4 > maiorIdadeE4)
            {
                maiorIdadeE4 = idadeE4;
            }
            
            if (sexoE4 == 'F' && salarioE4 <= 100)
            {
                salarioMulherE4++;
            }
            
        }

        mediaSalarioE4 = salarioTotalE4 / 15;

        printf("A media do salario do grupo e igual a: %.2f \nA menor idade e a maior idade respectivamente sao: %d e %d \nA quantidade de mulheres que recebem ate R$100 e: %d", mediaSalarioE4, menorIdadeE4, maiorIdadeE4, salarioMulherE4);

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
