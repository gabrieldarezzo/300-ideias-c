#include <stdio.h>
// Libs to check if file exists 
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>


int main(void) {


    struct stat st = {0};
    if (stat("storage", &st) == -1) {
        mkdir("storage", 0700);
    }

    FILE *fpt;
    fpt = fopen("storage/users_datas.csv", "w+");
    // fprintf(fpt,"ID, Name, Email, Phone Number\n");

    int id = 3;
    char name[50] = "Gabriel Sousa Darezzo";
    float salary = 30000;
    // char email[250] = "darezzo.gabriel@gmail.com";
    // char phone[250] = "(11) 94707-4699";
    fprintf(fpt,"%d, %s, %.2f\n", id, name, salary); 


    // Se eu desmaiar, vc vai chamar a ambulancia?
    // for(int i = 0; i < 5000; i++) {
    //     fprintf(fpt,"%d, %s, %s, %s\n", id, name, email, phone);
    // }

    fclose(fpt);
    return 0;
}

