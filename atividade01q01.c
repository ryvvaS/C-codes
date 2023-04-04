/*- Faça um programa em que o usuário digite o custo de uma determinada mercadoria, em seguida, adicionase ao custo o valor do frete e despesas eventuais (também solicitadas pelo teclado). Para concluir, o programa pergunta qual o valor de venda e indica a percentagem de lucro da mercadoria.
*/


#include <stdio.h>

int main() {
    float custo, frete, despesas, precoVenda, precoTotal, lucro, percentualLucro;

    printf("Digite o custo da mercadoria: ");
    scanf("%f", &custo);

    printf("Digite o valor do frete: ");
    scanf("%f", &frete);

    printf("Digite o valor das despesas eventuais: ");
    scanf("%f", &despesas);

    printf("Digite o valor de venda: ");
    scanf("%f", &precoVenda);

    precoTotal = custo + frete + despesas;
    lucro = precoVenda - precoTotal;
    percentualLucro = (lucro / precoTotal) * 100;

    printf("O custo total da mercadoria e R$%.2f\n", precoTotal);
    printf("O lucro e R$%.2f (%.2f%%)\n", lucro, percentualLucro);

    return 0;
}