#include <stdio.h>
// #include <stdlib.h> // https://www.tutorialspoint.com/c_standard_library/stdlib_h.htm
// #include <math.h> // https://linguagemc.com.br/a-biblioteca-math-h/
// #include <ctype.h> // https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
// #include <time.h> // https://www.tutorialspoint.com/c_standard_library/time_h.htm

void trocaVariavel(int *pnum1, int *pnum2);
void trocaVariavel2(int *pnum1, int *pnum2);

int main()
{

    int num1, num2;

    printf("Qual sera o valor de num1? \n");
    scanf("%d", &num1);

    printf("Qual sera o valor de num2? \n");
    scanf("%d", &num2);

    printf("num1: %d \n num2: %d \n", num1, num2);

    trocaVariavel(&num1, &num2);

    printf("troca \n num1: %d \n num2: %d \n", num1, num2);

    trocaVariavel2(&num1, &num2);


    printf("troca \n num1: %d \n num2: %d \n", num1, num2);

    return 0;
}

void trocaVariavel(int *pnum1, int *pnum2)
{

    *pnum1 = 222222;

    *pnum2 = 111111;

    return;
}

void trocaVariavel2(int *pnum1, int *pnum2)
{

    *pnum1 += *pnum2;
    *pnum2 = *pnum1 - *pnum2;
    *pnum1 = *pnum1 - *pnum2;
     

    return;
}
