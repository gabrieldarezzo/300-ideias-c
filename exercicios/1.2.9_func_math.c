#include <stdio.h>

/*
1.2.9 Funções matemáticas - Fornecer o valor retornado pelas operações matemáticas abaixo.
Depois, chamando as funções adequadas, escreva um programa que lhe permita verificar a correção dos seus cálculos:
1 - Raiz quadrada de 169
2 - 17² (17 elevado a 2)
3 - Cosseno(0)
4 - 1.65 arredondado para inteiro
*/

int squareCalc(int number) {
    printf("1 - Raiz quadrada de %i\n", number);
    for(int i = 2; i < number; i++) {
        if(i == (number / i)) {
            return i;
        }
    }
    return 0;
}

int powerCalc(int number) {
    return number * number;
}

int main(void) {
    
    int number = 0;
    float numberFloat = 0;

    printf("Qual o valor para verificar a raiz quadrada ?\n");
    scanf("%i",&number);
    printf("Raiz quadrada de %i, Resultado: %d\n", number, squareCalc(number));


    printf("Informe um valor para elevar a 2 ?\n");
    scanf("%i",&number);
    printf("%i elevado a: %i\n", number, powerCalc(number));


    //  cos(a) = cateto adjacente
    //         ------------------
    //           hipotenusa

    // printf("Informe um valor para elevar a 2 ?\n");
    // scanf("%i",&number);
    // printf("%i elevado a: %i\n", number, powerCalc(number));

    printf("Informe um valor para arredondar para inteiro, Ex: \n1.4 => 1 \n2.42 => 2\n");
    scanf("%f",&numberFloat);
    printf("O número %f ficou %i\n", numberFloat, (int)numberFloat);




        
    return 0;
}

