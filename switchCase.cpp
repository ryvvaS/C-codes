#include<stdio.h>

int main(){
    // geralmente é utilizado para menus... no portugol seria CASO/
    int diaDaSemana;
    printf("Digite um valor de 1 a 7: ");
    scanf("%d", &diaDaSemana);

    switch (diaDaSemana)    {// inicio do bloco de switch
    case 1:
        printf(" Domingo \n");
        break;
    case 2:
        printf(" Segunda \n");
        break;
    case 3:
        printf(" Terça \n");
        break;
    case 4:
        printf(" Quarta \n");
        break;
    case 5:
        printf(" Quinta \n");
        break;
    case 6:
        printf(" Sexta \n");
        break;
    case 7:
        printf(" Sabado \n");
        break;
    default:
        printf(" ERROR: Valor invalido!!! DIGITE APENAS VALORES ENTRE 1 E 7\n");
    } // final do bloco de switch
    return 0;
}
