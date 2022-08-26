#include <stdio.h>

int main(void)
{
    FILE *file = fopen("storage/users_datas.csv", "r");
    char buf[400];
    char id[11];
    char name[255];
    float salary;


    while(fgets(buf, sizeof(buf), file))
    {    
        //Example of .csv => "3, Gabriel Sousa Darezzo,30000.00"
        sscanf(buf, "%10[^,],%22[^,],%f",  id, name, &salary); //  Repare no maldito & 
        printf("ID: %s\n", id);
        printf("Name: %s\n", name);
        printf("Salary: %.2f\n", salary);
    }

    return 0;
}