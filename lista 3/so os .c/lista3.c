#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
#include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm

int main()
{

   // iniciando variaveis
   int continua, contadorLooping, exercicio;
   continua = 's';
   contadorLooping = 0;

   // exercicio 1
   int codigoE1;
   float nota1E1, nota2E1, nota3E1, mediaE1;

   // exercicio 2
   int contadorE2, numE2, totalE2;
   float mediaE2;

   // exercicio 3
   int numE3, contador0E3, contador26E3, contador51E3, contador76E3, foraEscopo;

   // exercicio 4
   int idadeE4, menorIdadeE4, maiorIdadeE4, salarioMulherE4;
   float salarioE4, salarioTotalE4, mediaSalarioE4;
   char sexoE4;

   // exercicio 5
   int idadeE5, maiorIdadeE5, contadorE5;
   char sexoE5, cabeloE5, olhosE5;

   // exercicio 6
   int resto;

   // exercicio 7
   float salarioE7, maiorSalarioE7, salarioTotalE7, mediaSalarioE7, porcentagemSalarioE7, mediaFilhosE7;
   int filhosE7, contadorSalarioE7, contadorE7, filhosTotalE7;

   // exercicio 8
   int num1E8, num2E8, divisorE8, somaE8, totalE8, restoSomaE8;
   float mediaTotalE8;

   // exercicio 9
   int num1E9, num2E9, restoE9;

   // exercicio 10
   int totalValoresE0, valorE0, dentroIntervaloE0, foraIntervaloE0, menorIntervaloE0, maiorIntervaloE0;

   while (continua == 's')
   {
      exercicio = 0;

      // ---->come�o<----

      printf("qual exercicio voce gostaria de testar? \n 1 - media aritimetica com 3 notas \n 2 - media de numeros digitados \n 3 - deter minar intervalo de valores \n 4 - pesquisa entre habitantes \n 5 - pesquisa entre habitantes 2 \n 6 - numeros entre 1000 e 1999 com resto 5 quando divididos por 11 \n 7 - pesquisa sobre salario e numero de filhos \n 8 - media aritimetica de numeros entre x e y \n 9 - numeros impares entre x e y \n 0 - ver se z valores estao dentro de um intervalo [x, y]");
      scanf("%d", &exercicio);

      if (exercicio == 1)
      {
         codigoE1 = 1, nota1E1 = 0, nota2E1 = 0, nota3E1 = 0, mediaE1 = 0;

         while (codigoE1 != 0)
         {

            printf("qual o seu codigo? \n");
            scanf("%d", &codigoE1);

            if (codigoE1 == 0)
            {
               break;
            }

            printf("qual e a primeira nota? \n");
            scanf("%f", &nota1E1);

            printf("qual e a segunda nota? \n");
            scanf("%f", &nota2E1);

            printf("qual e a terceira nota? \n");
            scanf("%f", &nota3E1);

            mediaE1 = (nota1E1 + nota2E1 + nota3E1) / 3;

            printf("a sua media e = %.1f \n", mediaE1);
         }
      }
      else if (exercicio == 2)
      {
         contadorE2 = 0, numE2 = 0, totalE2 = 0, mediaE2 = 0;

         printf("Qual sera o primeiro numero? \n");
         scanf("%d", &numE2);

         while (numE2 != 0)
         {
            totalE2 += numE2;

            printf("Qual sera o proximo numero? \n");
            scanf("%d", &numE2);

            contadorE2++;
         }

         mediaE2 = (float)totalE2 / contadorE2;

         printf("A media desses %d numeros e %g \n", contadorE2, mediaE2);
      }
      else if (exercicio == 3)
      {
         numE3 = 0, contador0E3 = 0, contador26E3 = 0, contador51E3 = 0, contador76E3 = 0, foraEscopo = 0;

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
      }
      else if (exercicio == 4)
      {
         idadeE4 = 0, menorIdadeE4 = 1000, maiorIdadeE4 = 0, salarioE4 = 0, salarioMulherE4 = 0, salarioTotalE4 = 0, mediaSalarioE4 = 0, sexoE4 = 0;

         for (int pessoaE4 = 1; pessoaE4 <= 15; pessoaE4++)
         {
            printf("Qual o sexo da pessoa %d? \n M - Masculino \n F - Feminino \n", pessoaE4);
            scanf(" %c", &sexoE4);

            printf("Qual o salario da pessoas %d? \n", pessoaE4);
            scanf("%f", &salarioE4);

            printf("Qual a idade da pessoas %d? \n", pessoaE4);
            scanf("%d", &idadeE4);

            sexoE4 = toupper(sexoE4);

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
      }
      else if (exercicio == 5)
      {
         idadeE5 = 0, maiorIdadeE5 = 0, contadorE5 = 0, sexoE5 = '0', cabeloE5 = '0', olhosE5 = '0';

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
      }
      else if (exercicio == 6)
      {
         resto = 0;

         for (int contador = 1000; contador < 2000; contador++)
         {
            resto = contador % 11;

            if (resto == 5)
            {
               printf("%d, ", contador);
            }
         }
      }
      else if (exercicio == 7)
      {
         filhosE7 = 0, contadorSalarioE7 = 0, contadorE7 = 0, filhosTotalE7 = 0, salarioE7 = 0, maiorSalarioE7 = 0, salarioTotalE7 = 0, mediaSalarioE7 = 0, porcentagemSalarioE7 = 0, mediaFilhosE7 = 0;

         while (salarioE7 >= 0)
         {
            printf("Qual o seu salario? \n");
            scanf("%f", &salarioE7);

            if (salarioE7 < 0)
            {
               break;
            }

            printf("Quantos filhos você tem? \n");
            scanf("%d", &filhosE7);

            if (salarioE7 > maiorSalarioE7)
            {
               maiorSalarioE7 = salarioE7;
            }

            if (salarioE7 < 101)
            {
               contadorSalarioE7++;
            }

            salarioTotalE7 += salarioE7;
            filhosTotalE7 += filhosE7;
            contadorE7++;
         }

         mediaSalarioE7 = salarioTotalE7 / contadorE7;
         mediaFilhosE7 = (float)filhosTotalE7 / contadorE7;
         porcentagemSalarioE7 = (float)(contadorSalarioE7 * 100) / contadorE7;

         printf("A media de salario da populacao e %.2f \nA media de filhos da populacao e %.1f \nO maior salario e %.2f \nA porcentagem de pessoas com salario de ate R$100 e %.2f", mediaSalarioE7, mediaFilhosE7, maiorSalarioE7, porcentagemSalarioE7);
      }
      else if (exercicio == 8)
      {
         num1E8 = 0, num2E8 = 0, divisorE8 = 0, somaE8 = 0, totalE8 = 0, restoSomaE8 = 0, mediaTotalE8 = 0;

         printf("Qual o primeiro numero? \n");
         scanf("%d", &num1E8);

         printf("Qual o ultimo numero? \n");
         scanf("%d", &num2E8);

         divisorE8 = num2E8 - num1E8;

         somaE8 = num2E8 + num1E8;

         restoSomaE8 = somaE8 % 2;

         if (restoSomaE8 == 0)
         {
            totalE8 = (somaE8 * ((divisorE8 / 2) + 0.5)) - somaE8;
         }
         else
         {
            totalE8 = (somaE8 * ((divisorE8 / 2) + 1)) - somaE8;
         }

         mediaTotalE8 = (float)totalE8 / (divisorE8 - 1);

         printf("a media dos numeros entre %d e %d = %g", num1E8, num2E8, mediaTotalE8);
      }
      else if (exercicio == 9)
      {
         num1E9 = 0, num2E9 = 0, restoE9 = 0;

         printf("Qual o primeiro numero? \n");
         scanf("%d", &num1E9);

         printf("qual o ultimo numero? \n");
         scanf("%d", &num2E9);

         for (int i = num1E9; i < num2E9; i++)
         {
            restoE9 = i % 2;

            if (restoE9 != 0)
            {
               printf("%d, ", i);
            }
         }
      }
      else if (exercicio == 0)
      {
         totalValoresE0 = 0, valorE0 = 0, dentroIntervaloE0 = 0, foraIntervaloE0 = 0, menorIntervaloE0 = 0, maiorIntervaloE0 = 0;

         printf("Quantos valores voce gostaria de inserir? \n");
         scanf("%d", &totalValoresE0);

         printf("Qual sera o menor valor do intervalo? \n");
         scanf("%d", &menorIntervaloE0);

         printf("Qual sera o maior valor do intervalo? \n");
         scanf("%d", &maiorIntervaloE0);

         for (int i = 1; i <= totalValoresE0; i++)
         {
            printf("Qual sera o %dº valor: ", i);
            scanf("%d", &valorE0);

            if (valorE0 >= menorIntervaloE0 && valorE0 <= maiorIntervaloE0)
            {
               dentroIntervaloE0++;
            }
            else
            {
               foraIntervaloE0++;
            }
         }

         printf("Dos valores digitados \n %d estao dentro do intervalo de %d a %d \n %d estao fora do intervalo", dentroIntervaloE0, menorIntervaloE0, maiorIntervaloE0, foraIntervaloE0);
      }

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
