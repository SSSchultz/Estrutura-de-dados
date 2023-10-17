#include <stdio.h>

int main()
{
    
        int numeroFilhos = 0, contadorPessoas = 0, contadorCem = 0, filhosTotal = 0;
        float salarioMedia = 0, mediaFilhos = 0, maiorSalario = 0, salario = 0, salarioTotal = 0, salarioPorcentagem = 0;
            
            
            
        while (salario > -1){
                
            printf("Qual o salario: \n");
            scanf("%f", &salario);
                
            if (salario < 0){
            break;
            }
            
            contadorPessoas++;
            
            if (salario > maiorSalario ){
                maiorSalario = salario;
            }
            
            salarioTotal += salario;
            
            printf("Quantos filhos: \n");
            scanf("%d", &numeroFilhos);
            
            filhosTotal += numeroFilhos;
            
            if (salario <= 100){
                contadorCem++;
            }
        }
        
        salarioMedia = salarioTotal / contadorPessoas;
        
        mediaFilhos = (float) numeroFilhos / contadorPessoas;
        
        salarioPorcentagem = (float) (contadorCem * 100) / contadorPessoas;
        
        printf(" Media do salario eh: %.2f, media de filhos eh: %.1f, maior salario eh: %.2f, percentoal de pessoas com salario ate 100R$: %g.", salarioMedia, mediaFilhos,maiorSalario, salarioPorcentagem);
        
        
        
        
        
            
            
        
        
    return 0;
}