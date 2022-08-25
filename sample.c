#include <stdio.h>

int main(void) {

    // Alocamos a memoria para uma string de 50 caracteres
    char name[50];
    // Imprimir no terminal a string: Escreva o seu nome : 
    printf("Escreva o seu nome : "); 
    // Lembra a variavel 'name' da linha 6? Vamos esperar o usuario interagir com o I/O via keyboard
    // Escrevendo o uma string (nome) e aguardando o retorno do 'carriage', no caso a tecla 'Enter'
    scanf("%s",&name);
    // pro fim, imprimir o texto: Seu nome é : {NOME_DO_BONECO}
    printf("Seu nome é : %s", name);
    return 0;
}