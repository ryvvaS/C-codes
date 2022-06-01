#include<stdio.h>
// operadoar logico || ou O, pode ser usado para alternecia, deterinação de limites....
int main(){
    float limiteMin = 5.0,  limiteMax = 12.00, temperatura;


    printf(" Informe a temperatura: ");
    scanf("%f", &temperatura);

    if(temperatura > limiteMax || temperatura < limiteMin) 
        printf(" ALERTA!!!!!!!\n Temperatura fora da faixa permitida !!!!!!!!!! \n");
    else
        printf(" Temperatura estavel \n");
    
    return 0;
}
