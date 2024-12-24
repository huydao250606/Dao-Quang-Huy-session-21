#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    FILE*bt01=fopen("bt01.txt","r");
    if(bt01==NULL){
        printf("Khong the mo file\n");
        return 1;
    }
    FILE*bt06=fopen("bt06.txt","w");
    if(bt06==NULL){
        printf("Khong the mo file\n");
        fclose(bt01);
        return 1;
    }
    while((ch=fgetc(bt01))!=EOF){
        fputc(ch,bt06);
    }
    fclose(bt01);
    fclose(bt06);
    printf("Da sao chep noi dung tu bt01.txt sang bt06.txt\n");
    return 0;
}

