#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <time.h>

void main()
{
    // looping
    short continua, contador;
    continua = 's';
    contador = 0;

    // escolha de exercicio
    short exercicio;
    exercicio = 0;



    while (continua == 's')
    {
        // ---->come�o<----

        printf("Qual exercicio voce gostaria de tentar? \n 1 - operacoes com 2 numeros \n 2 - calculo de media \n 3 - calculo de juros \n 4 - reescrita de um numero real \n 5 - calcular a raiz quadrada de um numero \n 6 - transformar anos em meses, dias, horas e minutos \n 7 - calcular a area de um triangulo \n 8 - calcular a area de um circulo \n 9 - calcular a are de um trapezio \n 10 - calcular imposto de renda");
        scanf("%d", &exercicio);




        // ---->final<----

        printf("Repentindo....\n");

        contador++;

        printf("Tecle 's' e aguarde se deseja continuar \n");
        continua = getch();
        sleep(1);
    }

    if (contador == 0)
        printf("O bloco NAO foi repetido.");
    else
        printf("O bloco foi repetido %d vezes", contador);
}
