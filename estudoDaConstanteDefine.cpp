#include<stdio.h>
#define ICMS 0.18; //declaração de constante

int main(){
    

    float precoProduto, valorIcms;

    printf("Informe o valor do pruduto: ");
    scanf("%f", &precoProduto);

    valorIcms = precoProduto*ICMS;

    printf(" Valor de imposto a ser pago : R$ %.2f", valorIcms);

    return 0;
}
 