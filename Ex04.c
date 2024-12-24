#include <stdio.h>

int main()
{
    char chuoi[256];
    FILE *file = fopen("bt01.txt", "r");
    if (file == NULL){
        printf("Mo tep khong thanh cong.");
        return 1;
    }
    if(fgets(chuoi, sizeof(chuoi), file)!=NULL){
        printf("%s", chuoi);
    }
    else
        printf("Tep rong");
    fclose(file);
}
