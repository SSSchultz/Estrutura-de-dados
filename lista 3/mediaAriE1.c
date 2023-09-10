#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
#include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm



int main() {

int continua, contadorLooping;
continua = 's';
contadorLooping = 0;

int codigoE1;
float nota1E1, nota2E1, nota3E1, mediaE1;

while (continua == 's')
{
    codigoE1 = 1, nota1E1 = 0, nota2E1 = 0, nota3E1 = 0, mediaE1 = 0;;
     // ---->come�o<----

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
