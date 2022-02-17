#include<stdio.h>

void apresentarClassificacao(){
    printf("IDADE <= 10 CRIANCA\n10 > IDADE < 18 ADOLESCENTE\n18 >= IDADE < 25 JOVEM\n25 >= IDADE <= 58 ADULTO\nIDADE > 58 IDOSO\n");

}

int calcularIdade(int anoAtual, int anoNascimento){
    
    return anoAtual - anoNascimento;
}

int main(){

    int anoAtual, anoNascimento, idade;

    printf("Digite o ano atual e o ano nascimento:");
    scanf("%d%d", &anoAtual,&anoNascimento);

    idade = calcularIdade(anoAtual, anoNascimento);

    printf("Idade %d\n", idade);

    apresentarClassificacao();

    switch (idade)    {
        case 0 ... 10:
            printf("Crianca!");
            break;
        case 11 ... 18:
            printf("Adolescente!");
            break;
        case 19 ... 25:
            printf("Jovem!");
            break;
        case 26 ... 58:
            printf("Adulto!");
            break;
        case 59 ... 120:
            printf("Idoso!");
           break; 
    default:
        printf("Valor invalido!\n");
      }
}