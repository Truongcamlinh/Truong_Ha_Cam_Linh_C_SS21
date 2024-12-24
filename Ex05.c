#include <stdio.h>

int main()
{
    FILE *file = fopen("bt05.txt", "w");
    int soDong;
    char chuoi[256];
    if(file==NULL){
        printf("Khong the mo file.");
        return 1;
    }
    printf("Nhap so dong.");
    scanf("%d", &soDong);
    getchar();
    for (int i = 0; i < soDong;++i){
        printf("Nhap noi dung dong %d: ", i + 1);
        fgets(chuoi, 256, stdin);
        fprintf(file, "%s", chuoi);
    }
    fclose(file);
    file = fopen("bt05.txt", "r");
    if (file == NULL){
        printf("Khong mo duoc file.");
        return 1;
    }
    while(fgets(chuoi, 256, file)!=NULL){
        printf("%s", chuoi);
    }
    fclose(file);
}