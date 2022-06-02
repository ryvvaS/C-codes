#include<stdio.h>
#define ICMS 0.18; //declaração de constante

int main(){
    

    float precoProduto, valorIcms, valorTotal;
    // const tipo nomeDaConstante = valorDaConstante
    const float frete = 10.50;


    printf("Informe o valor do pruduto: ");
    scanf("%f", &precoProduto);

    valorIcms = precoProduto*ICMS;
    printf("\nValor de imposto a ser pago : R$ %.2f", valorIcms);
   
    valorTotal = precoProduto + valorIcms + frete;
    printf("\nValor do produto : R$ %.2f", valorTotal);

    return 0;
}
 