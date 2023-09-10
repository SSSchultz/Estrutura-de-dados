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

    int idadeE5, maiorIdadeE5, contadorE5;
    char sexoE5, cabeloE5, olhosE5;

    while (continua == 's')
    {
        idadeE5 = 0, maiorIdadeE5 = 0, contadorE5 = 0, sexoE5 = '0', cabeloE5 = '0', olhosE5 = '0';

        // ---->come�o<----

        while (idadeE5 != -1)
        {
            printf("Qual a sua idade?\n");
            scanf("%d", &idadeE5);

            if (idadeE5 == -1)
            {
                break;
            }

            printf("Qual o seu sexo? \n M - Masculino \n F - Feminino \n");
            scanf(" %c", &sexoE5);

            printf("Qual a cor do seu cabelo?\n L - para loiro \n O - para outros \n");
            scanf(" %c", &cabeloE5);

            printf("Qual a cor dos seus olhos?\n V - para verdes \n O - para outros \n");
            scanf(" %c", &olhosE5);



            if (idadeE5 > maiorIdadeE5)
            {
                maiorIdadeE5 = idadeE5;
            }

            sexoE5 = toupper(sexoE5);
            cabeloE5 = toupper(cabeloE5);
            olhosE5 = toupper(olhosE5);

            if (sexoE5 == 'F' && idadeE5 >= 18 && idadeE5 <= 35 && olhosE5 == 'V' && cabeloE5 == 'L')
            {
                contadorE5++;
            }
        }

        printf("A maior idade do grupo e %d, e a quantidade de mulheres com cabelo loiro, olhos verdes e entre 18 e 35 anos de idade e %d \n", maiorIdadeE5, contadorE5);

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
