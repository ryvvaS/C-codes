#include<stdio.h>
int main (){
    char letra; // variaveis do tipo char, contém caracteres
    int x; // variaveis do tipo int contém números inteiros
    float salario; // vairaveis do tipo float contem números (reais), aqueles que possuem casa decimais

    //Atribuição de valores
    letra = 'a';
    x = 10;
    salario = 3972.50;

    //Saida de dados na tela

    /*
    Marcadores
    % c = para char
    % d = para números inteiros
    % f = para números (reais), tipo float

    */



    printf("letra = %c\n",letra);
    printf("x = %d\n",x);
    printf("salario = %.2f\n",salario);
    return 0;
}