#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
// #include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm



int main() {

int continua, contadorLooping;
continua = 's';
contadorLooping = 0;

int num1E67, num2E67, num3E67, maiorE67, menorE67;

while (continua == 's')
{
   num1E67 = 0, num2E67 = 0, num3E67 = 0, maiorE67 = 0, menorE67 = 0;
     // ---->come�o<----

printf("Qual sera o primeiro numero?\n");
scanf("%d", &num1E67);

printf("Qual sera o segundo numero?\n");
scanf("%d", &num2E67);

printf("Qual sera o terceiro numero?\n");
scanf("%d", &num3E67);

maiorE67 = num1E67;
menorE67 = num1E67;

if (num1E67 == num2E67 == num3E67)
{
   printf("Os numeros sao iguais \n");
}
else
{
    if (maiorE67 < num2E67)
    {
        maiorE67 = num2E67;
    }
    
    if (maiorE67 < num3E67)
    {
        maiorE67 = num3E67;
    }

    if (menorE67 > num2E67)
    {
        menorE67 = num2E67;
    }

    if (menorE67 > num3E67)
    {
        menorE67 = num3E67;
    }
}

printf("O maior numero e: %d \nO menor numero e: %d\n", maiorE67, menorE67);


    // ---->final<----

   printf("Repentindo....\n");

   contadorLooping++;

   printf("Tecle 's' e aguarde se deseja continuar \n");
   continua = getch();
   sleep(1);
}

if (contadorLooping == 0)
   printf("O bloco NAO foi repetido.");
else printf("O bloco foi repetido %d vezes", contadorLooping);

return 0;
}
