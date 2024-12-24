#include <stdio.h>

int main()
{
    char chuoi[256];
    FILE *file = fopen("bt01.txt", "w");
    if(file==NULL){
        printf("Khong the mo tep thanh cong.");
        return 1;
    }
    fgets(chuoi, sizeof(chuoi), stdin);
    fprintf(file, "%s", chuoi);
    fclose(file);
    printf("Mo tap va ghi chuoi thanh cong.");
}
