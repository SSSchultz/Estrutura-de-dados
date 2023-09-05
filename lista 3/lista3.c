#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
#include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
#include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm



int main() {

int continua, contador;
continua = 's';
contador = 0;

while (continua == 's')
{
     // ---->come�o<----

printf("teste");

    // ---->final<----

   printf("Repentindo....\n");

   contador++;

   printf("Tecle 's' e aguarde se deseja continuar \n");
   continua = getch();
   sleep(1);
}

if (contador == 0)
   printf("O bloco NAO foi repetido.");
else printf("O bloco foi repetido %d vezes", contador);

return 0;
}
