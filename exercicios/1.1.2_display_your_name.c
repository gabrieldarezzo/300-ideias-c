#include <stdio.h>

int main(void) {

    /*
    1.1.2 Etiqueta - Elabore um programa que, após limpar a tela, escreve seu nome completo 
    na primeira linha, seu endereço na segunda, e o CEP e telefone na terceira.
    */

    char nome[50] = "Gabriel Darezzo";
    char endereco[50] = "Rua Isidoro Favaro, 78 São Paulo Jd Ester";
    char cep[50] = "05373-020";
    char telefone[50] = "(11) 947074699";

    printf("Seu nome é : %s\n", nome);
    printf("Seu Endereço é : %s\n", endereco);
    printf("Seu Cep é : %s, e seu Telefone é: %s\n", cep, telefone);
    return 0;
}