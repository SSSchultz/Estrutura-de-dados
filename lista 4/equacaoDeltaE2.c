#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
// #include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm



int main() {

int continua, contadorLooping;
continua = 's';
contadorLooping = 0;

float valorAE2, valorBE2, valorCE2, deltaE2;

while (continua == 's')
{
    valorAE2 = 0, valorBE2 = 0, valorCE2 = 0, deltaE2 = 0;
     // ---->come�o<----

    printf("Qual é o valor de A?\n");
    scanf("%g", &valorAE2);

    printf("Qual é o valor de B?\n");
    scanf("%g", &valorBE2);

    printf("Qual é o valor de C?\n");
    scanf("%g", &valorCE2);

    deltaE2 = (valorBE2 * valorBE2) + (-4*valorAE2*valorCE2);

    printf("O valor de Delta e %g \n", deltaE2);
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
