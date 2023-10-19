#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
// #include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm



int main() {

int continua, contadorLooping;
continua = 's';
contadorLooping = 0;

int num1E45, num2E45;

while (continua == 's')
{
   num1E45 = 0, num2E45 = 0;
     // ---->come�o<----

printf("Qual sera o primeiro numero?\n");
scanf("%d", &num1E45);

printf("Qual sera o segundo numero?\n");
scanf("%d", &num2E45);

if (num1E45 == num2E45)
{
   printf("Os numeros sao iguais \n");
}
else if (num1E45 > num2E45)
{
   printf("O maior numero e: %d \n O menor numero e: %d\n", num1E45, num2E45);
}
else if (num2E45 > num1E45)
{
   printf("O maior numero e: %d \n O menor numero e: %d", num2E45, num1E45);
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
else printf("O bloco foi repetido %d vezes", contadorLooping);

return 0;
}
