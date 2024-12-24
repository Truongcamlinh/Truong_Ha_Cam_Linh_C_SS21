#include <stdio.h>

int main()
{
    FILE *file = fopen("bt01.txt", "r");
    if(file==NULL){
        printf("Khong the mo tap.");
        return 1;
    }
    char c = fgetc(file);
    if(c !=EOF){
        printf("%c", c);
    }
    else{
        printf("Tep rong.");
    }
    fclose(file);
}