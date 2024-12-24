#include <stdio.h>
#include <stdlib.h>

int main()
{
    char chuoi[256];
    FILE *file = fopen("bt01.txt", "a");
    if (file == NULL){
        printf("Mo tep thanh cong.");
        return 1;
    }
    fgets(chuoi, sizeof(chuoi), stdin);
    fprintf(file, "%s", chuoi);
    fclose(file);
    printf("Mo tap va ghi chuoi thanh cong.");
}
