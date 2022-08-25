#include <stdio.h>
#include <string.h>



/*
Escreva um programa que produza a tela esquematizada abaixo:

******** ******** *
*        *      * *
*        *      * *
******** *      * *
       * *      * *
       * *      * *
******** ******** ********
*/

void showMenu() {
    printf("\n\n");
    printf("'d + Enter' => show BIG -D\n");
    printf("'a + Enter' => show BIG -A\n");
    printf("'x + Enter' => Exit\n");
}

void showD() {
    printf("\n****");
    printf("\n*   *");
    printf("\n*    *");
    printf("\n*    *");
    printf("\n*    *");
    printf("\n*   *");
    printf("\n***\n");
}


void showA() {
    printf("\n   **");
    printf("\n *    *");
    printf("\n*      *");
    printf("\n********");
    printf("\n*      *");
    printf("\n*      *");
    printf("\n*      *");
    printf("\n*      *\n");
}



int main(void) {
    char keyPress = 'l'; // could be anychar just to set as 'neverKeyPress'


    while(1) {
        if(keyPress == 'l'){
            printf("\033[2J\033[1;1H");
            showMenu();
        }

        keyPress = getchar();
        
        

        if (keyPress == 'd') {
            showD();   
        }

        if (keyPress == 'a') {
            showA();   
        }

        if (keyPress == 'x') {
            break;
        }
        
    }

    return 0;

}

