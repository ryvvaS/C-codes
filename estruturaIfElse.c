#include <stdio.h>
int main(){
    int a, b, soma;

    printf("Digite um numero inteiro:");
    scanf("%d",&a);

    printf("Digite um numero inteiro:");
    scanf("%d",&b);

    soma = a+b;
    printf("O valor da soma = %d\n", soma);

    if (soma>10){ // a condição só vai ser executada se ela for atendida. 
        printf("O valoa da soma eh maior que 10 \n");
        if (soma>15){
            printf ("VALOR ALTO!!!\n");
        }
        
    }
    else{ // quando a condição anterior nao for atendida, a condicionante else eh requisitada.
        printf("O valoa da soma eh menor que 10 \n");
    }

    printf("------O PROGAMA FOI ENCERRADO!!!------");
    return 0;
}
