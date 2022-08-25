#include <stdio.h>
#include <string.h>

struct Paragraph {
    char text[200];
};

void showMenu(void);
void setParagraphs(struct Paragraph paragraphs[3]);


/*
    1.1.8 Apresentação - Um estudante ia participar de uma feira de ciências e seu projeto tinha o tema "fotossíntese".
    Ele conseguiu um notebook emprestado, e queria um programa que lhe permitisse apresentar um texto dividido em partes, 
    cada parte em uma tela, e o programa deveria mudar para a próxima tela ao toque de uma tecla. 
    A tela inicial deve ser a palavra "FOTOSSÍNTESE" escrita com letras grandes. 
    Faça o programa para o estudante, usando o texto abaixo, no qual cada parágrafo deve aparecer em uma tela diferente. 
    Como o estudante não entende muito de operação de computadores, você tem que também gerar um arquivo executável, 
    copiá-lo para o outro computador e incluir um ícone para fácil execução sob Windows.
    
    Parágrafos :
    1 - A água e os sais minerais absorvidos pelas raízes sobem através dos vasos lenhosos do caule e chegam às folhas.
    2 - Nas folhas, existe uma substância verde, a clorofila, que absorve a energia luminosa do sol. Ao mesmo tempo, por meio dos estômatos presentes nas folhas, a planta absorve gás carbônico do ar.
    3 - Usando a energia solar, o gás carbônico e o hidrogênio contido na água retirada do solo, após complicadas reações químicas, a planta produz açúcares (glicose).
*/
int main(void) {

    struct Paragraph paragraphs[3];
    setParagraphs(paragraphs);
    char keyPress = 'l'; // could be anychar just to set as 'neverKeyPress'
    int actualPage = 0;

    while(1) {
        if(keyPress == 'l'){
            showMenu();
        }

        keyPress = getchar();
        if (keyPress == 'd') {
            printf("\033[2J\033[1;1H");
            printf("%s", paragraphs[actualPage].text);
            if(actualPage != 2) {
                actualPage++;
            }
            
            showMenu();
        }

        if (keyPress == 'a') {
            printf("\033[2J\033[1;1H");
            printf("%s", paragraphs[actualPage].text);

            if(actualPage != 0) {
                actualPage--;
            }
            showMenu();
        }

        if (keyPress == 'x') {
            break;
        }
        
    }

    return 0;

}

void showMenu() {
    printf("\n\n");
    printf("    __________  __________  __________  __ _   ___________________ ______\n");
    printf("   / ____/ __ \\/_  __/ __ \\/ ___/ ___/_/_// | / /_  __/ ____/ ___// ____/\n");
    printf("  / /_  / / / / / / / / / /\\__ \\\\__ \\/  _/  |/ / / / / __/  \\__ \\/ __/   \n");
    printf(" / __/ / /_/ / / / / /_/ /___/ /__/ // // /|  / / / / /___ ___/ / /___   \n");
    printf("/_/    \\____/ /_/  \\____//____/____/___/_/ |_/ /_/ /_____//____/_____/   \n");
    printf("\n\n");
    printf("'d + Enter' => Avançar\n'a + Enter' => Voltar\n'x + Enter' => Sair\n");
}


void setParagraphs(struct Paragraph paragraphs[3]) {
    strcpy(paragraphs[0].text, "1 - A água e os sais minerais absorvidos pelas raízes sobem através dos vasos lenhosos do caule e chegam às folhas.");
    strcpy(paragraphs[1].text, "2 - Nas folhas, existe uma substância verde, a clorofila, que absorve a energia luminosa do sol. Ao mesmo tempo, por meio dos estômatos presentes nas folhas, a planta absorve gás carbônico do ar.");
    strcpy(paragraphs[2].text, "3 - Usando a energia solar, o gás carbônico e o hidrogênio contido na água retirada do solo, após complicadas reações químicas, a planta produz açúcares (glicose).");
}
