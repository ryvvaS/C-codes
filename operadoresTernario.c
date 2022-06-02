#include<stdio.h>

int main(){
    int numero;
    printf(" Digite um numero: ");
    scanf("%d",&numero);

    // condiçao a ser testada antes da interrogação ? depois da interrogação vem o que será feito comando para condição verdadeira / comando para condição falsa

    numero >= 0 ? numero++ : numero --;
    // dessa forma substitui um if else
    printf(" O novo valor de numero e: %d", numero);
    return 0;
}
