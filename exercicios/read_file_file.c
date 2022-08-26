#include <stdio.h>



int main(void) {


    // TODO: check if file exists ?

    // FILE *fpt;
    // fpt = fopen("storage/users_datas.csv", "r");


    char buffer[250]; // Buffer to store data
    FILE * stream;
    stream = fopen("storage/users_datas.csv", "r");
    int count = fread(&buffer, sizeof(char), 250, stream);
    fclose(stream);
    // Printing data to check validity
    printf("Data read from file:\n%s \n", buffer);
    printf("Elements read: %d", count);
    
 
    return 0;
}

