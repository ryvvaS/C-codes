#include<stdio.h>
// trabalhando a estrutura if else dentro de outra estrutura if else....
int main(){
    int n1, n2;
    printf("Digite o primeiro numero:");
    scanf("%d", &n1);
    //fflush(stdin);
    printf("Digite o segundo numero:");
    scanf("%d", &n2);

    if(n1==n2){
        printf("Os numero sao iguais");
        printf("Por favor digite numeros diferentes!\n");
    }else
        if (n1 > n2) 
            printf("O maior valor eh = %d", n1);
        else
            printf("O maior valor eh = %d", n2);
        
    
    return 0;
}
