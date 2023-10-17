#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
// #include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm



int main() {

int continua, contadorLooping;
continua = 's';
contadorLooping = 0;

float valorE1;

while (continua == 's')
{
    valorE1 = 0;
     // ---->come�o<----

    printf("qual sera o valor?\n");
    scanf("%f", &valorE1);

    if (valorE1 > 0)
    {
        printf("O valor %g é positivo\n", valorE1);
    }
    else
    {
        printf("O valor %g não é positivo\n", valorE1);
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
