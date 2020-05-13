/* 
    Nome do Software: Calculadora de Equações do 1o e 2o Graus 
    Autor: Lucas M. Dutra - lukas_lmd@hotmail.com
    Ano: 2013
    Versão: 0.1
*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    float xa, xb, a1, a2, b1, b2, c, x1, x2;
    int opcao;
    
    printf("\n##### Calculadora de Equacoes do 1o e 2o Graus - 0.1 #####\n\n");
    printf(" 2013 - Free Software\n\n Desenvolvida por Lucas M. Dutra - dutr4 at outlook.com\n\n");
    printf(" O que deseja fazer? - Digite uma opcao abaixo:\n\n");
    printf(" 1 - Calcular equacao do primeiro grau (Ax+B=0) ;\n");
    printf(" 2 - Calcular equacao do segundo grau (Ax^2+Bx+C=0) ;\n");
    printf(" 3 - Sair\n\n");

    printf("Opcao: ");
    
    scanf("%i", &opcao);
    
    
    switch(opcao) {
    
        case 1:
            printf("Digite o valor de A: ");
            scanf("%f", &a1);
            printf("Agora digite o valor de B: ");
            scanf("%f", &b1);

            xa=-b1/a1;
            printf("\nO valor de X = %.2f \n\n", xa);
            break;

        case 2:
            printf("Digite o valor de A: ");
            scanf("%f", &a2);
            printf("Digite o valor de B: ");
            scanf("%f", &b2);
            printf("Agora digite o valor de C: ");
            scanf("%f", &c);

            x1 = (-b2+sqrt((b2*b2)-4*a2*c))/2*a2;
            x2 = (-b2-sqrt((b2*b2)-4*a2*c))/2*a2;

            printf("\nO valor de X1 = %.2f", x1);
            printf(" e o valor de X2 = %.2f \n\n" , x2);
            break;

        case 3:
            break;

        default:
            printf("nenhuma escolha foi feita, tente novamente!\n\n");
            main();
            break;

    }
    
    system("PAUSE");
    return(0);
    
}
    
