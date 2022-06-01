#include<stdio.h>
// operadoar logico NAO. ! na frente da condição.

int main(){
    float limiteMin = 5.0,  limiteMax = 12.00, temperatura;


    printf(" Informe a temperatura: ");
    scanf("%f", &temperatura);

    if (!(temperatura > limiteMax || temperatura < limiteMin)) 
        printf(" Temperatura estavel \n");
    else
        
        printf(" ALERTA!!!!!!!\n Temperatura fora da faixa permitida !!!!!!!!!! \n");
    
    return 0;
}
