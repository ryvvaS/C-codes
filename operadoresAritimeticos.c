#include<stdio.h>

int main (){

    int valor1, valor2;

    int respSoma, respSub, respMult, respDiv;

    printf("Testanto operadores aritimeticos\n\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite outro valor: ");
    scanf("%d", &valor2);

    respSoma = valor1 + valor2;
    printf("\nSoma = %d", respSoma);

    respSub = valor1 - valor2;
    printf("\nSubtracao = %d", respSub);
    
    respMult = valor1 * valor2;
    printf("\nMultiplicacao = %d", respMult);

    respDiv = valor1 / valor2;
    printf("\nDivisao = %d", respDiv);

    return 0;

}