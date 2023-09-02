#include <stdio.h>

int tabuada (int num1, int contador)
{
while (contador <= 10)
  {
    printf ("%d", num1 * contador);
    contador++;
  }
}

int main ()
{
  int num1, contador;
  contador = 1, num1 = 0;


  printf ("qual sera o numero? \n");
  scanf ("%d", num1);

  tabuada(num1, contador);

}


