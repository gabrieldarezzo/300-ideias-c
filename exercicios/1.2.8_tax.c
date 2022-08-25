#include <stdio.h>
#include <string.h>

float caculatePorcent(float value, int porcent) {
    return value - ((value / 100) * porcent);
}

void displayResultPorcent(float fullValue, float liquidValue, int porcent) {
    printf("Aplicando %i%s em cima de R$ %.2f\n", porcent, "%", fullValue);
    printf("Valor liquido a receber: R$ %.2f\n", liquidValue);
}

/*
1.2.8 Imposto - Um imposto é calculado com base na seguinte tabela:
Até 1.200,00 isento
de 1.201,00 a 5.000,00 10%
de 5.001,00 a 10.000,00 15%
acima de 10.000,00 20%.
Implemente um programa que calcule os impostos a pagar para um valor em cada faixa.
Para cada um, mostre uma mensagem que identifique na tela a que se refere cada valor.
*/
int main(void) {
    
    float toRecive = 0;
    int PORCENT_CALC = 0;

    printf("Qual o valor a receber? Ex: R$ 1.200,00, Informar: 1200\n");
    scanf("%f",&toRecive);
    printf("Valor informado: R$%.2f\n", toRecive);

    if(toRecive <= 1200) {
        printf("ISENTO!\n");
        displayResultPorcent(toRecive, caculatePorcent(toRecive, PORCENT_CALC), PORCENT_CALC);
        return 0;
    }

    if(toRecive <= 5000) {
        PORCENT_CALC = 10;
        displayResultPorcent(toRecive, caculatePorcent(toRecive, PORCENT_CALC), PORCENT_CALC);
        return 0;
    }

    if(toRecive <= 10000) {
        PORCENT_CALC = 15;
        displayResultPorcent(toRecive, caculatePorcent(toRecive, PORCENT_CALC), PORCENT_CALC);
        return 0;
    } else {
        PORCENT_CALC = 20;
        displayResultPorcent(toRecive, caculatePorcent(toRecive, PORCENT_CALC), PORCENT_CALC);
    }
    
    return 0;
}

