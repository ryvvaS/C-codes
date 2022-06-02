#include<stdio.h>

int main(){
    int x = 100, y =10;
    printf(" Valor inicial de x: %d\n",x);
    /* 
        x++ equivale a fazer x = x + 1;
        ++x tambem equivale a fazer x = x + 1;
        
        Então qual a diferença entre os dois comandos? 
        
        quando o operador esta na frente da variavel ele primeiro executa a operção depois printa o valor,
        quando o operador esta depois da variavel ele primeiro salva o valor, depois executa a operação.
        */

    printf("_____POS INCREMENTO_____");
    printf(" Valor de x na mesma linha do pos incremento: %d\n", x++);
    printf(" Valor de x na seguinte ao pos incremento: %d\n", x);

    printf("_____PRÉ INCREMENTO_____");
    printf(" Valor de x na mesma linha do pos incremento: %d\n", ++x);

    printf(" Valor inicial de y: %d\n",y);
    printf("_____POS INCREMENTO_____");
    printf(" Valor de x na mesma linha do pos incremento: %d\n", y--);
    printf(" Valor de x na seguinte ao pos incremento: %d\n", y);

    printf("_____PRÉ INCREMENTO_____");
    printf(" Valor de x na mesma linha do pos incremento: %d\n", --y);
    return 0;
}
