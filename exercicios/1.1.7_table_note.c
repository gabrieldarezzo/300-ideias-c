#include <stdio.h>
#include <string.h>

struct Student {
    char name[64];
    float score;
};

struct Student getDetail(void);
void displayDetail(struct Student student);

int main(void) {
    /*
        1.1.7 Tabela de notas - Escreva um programa que produza a seguinte saída na tela:
        ALUNO(A)    NOTA
        ========    =====
        ALINE       9.0
        MÁRIO       DEZ
        SÉRGIO      4.5 
        SHIRLEY     7.0
    */
    printf("ALUNO(A)\tNOTA\n");
    printf("========\t=====\n");

    struct Student students[4];

    
    strcpy(students[0].name, "ALINE");
    students[0].score = 9;

    strcpy(students[1].name, "MÁRIO");
    students[1].score = 10; // Should return string "DEZ"

    strcpy(students[2].name, "SÉRGIO");
    students[2].score = 4.5;

    strcpy(students[3].name, "SHIRLEY");
    students[3].score = 7;


    int lengthStudents = sizeof(students)/sizeof(students[0]);      
    // output
    for (int i = 0; i < lengthStudents; i++) {
        displayDetail(students[i]);
    }
    return 0;
}


void displayDetail(struct Student student) {
    if(student.score == 10) {
        printf("%s\t\t%s\n", student.name, "DEZ");
        return;
    } 
    printf("%s\t\t%.2f\n", student.name, student.score);
}
