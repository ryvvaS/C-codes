#include<stdio.h>
int main (){
    char conceito; // variavel do tipo char armazena um unico caracter na memoria
    float nota;
    int numero;
    printf("Informe o conceito de aluno: ");
    scanf("%c",&conceito); //& pois significa endereço de memoria da variavel lida
    
    printf("Informe a nota do aluno:");
    scanf("%f",&nota);

    printf("Informe a matrica do aluno:");
    scanf("%d",&numero);
   
    printf("\nMatricula: %d\n",numero);
    printf("Conceito: %c\n",conceito);
    printf("Nota: %.1f\n",nota);//formatando a saida da nota com uma casa decimal
    

    return 0;
}