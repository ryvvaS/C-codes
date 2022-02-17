#include<stdio.h>

int main (){
    int n1, n2, resto, r;

    printf("\nDigite um numero: ");
    scanf("%d",&n1);
    printf("\nDigite outro numero: ");
    scanf("%d",&n2);

    r = n1/n2;

    printf("\nResultado da divisao inteira de %d / %d = %d\n", n1,n2,r);

    resto = n1 % 2;

    printf("\nResto da divisao = %d", resto);

    return 0;

}