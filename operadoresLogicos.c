#include<stdio.h>
// operadoar logico && ou E
int main(){
    float notaFinal, frequencia;

    printf(" Informe a nota final do aluno: ");
    scanf("%f", &notaFinal);

    printf(" Informe a frequencia do aluno: ");
    scanf("%f", &frequencia);

    if(notaFinal >=6.0 && frequencia >= 75) // a codição de aprovação é que as duas sejam atendidas, && é equivalente a E, junção!!
        printf(" Aluno aprovado!\n");
    else
        printf(" Aluno reprovado!\n");
    
    return 0;
}
