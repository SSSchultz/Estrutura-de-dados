#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
#include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
// #include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm



int main() {

int continua, contadorLooping;
continua = 's';
contadorLooping = 0;
time_t t;

while (continua == 's')
{
     // ---->come�o<----



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

int dado() {
    
    srand((unsigned) time(&t));

    rand();
}
