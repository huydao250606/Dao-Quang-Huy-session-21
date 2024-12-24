#include<stdio.h>
#include<stdlib.h>

int main(){
    int num;
    char line[256];
    FILE *file=fopen("bt05.txt","w");
    if(file==NULL){
        printf("loi!!\n");
        return 1;
    }
    printf("Nhap so dong: ");
    scanf("%d",&num);
    getchar();
    for(int i=0;i<num;i++){
        printf("Nhap noi dung cho dong %d: ",i+1);
        fgets(line,sizeof(line),stdin);
        fprintf(file,"%s",line);
    }
    fclose(file);
    file=fopen("bt05.txt","r");
    if(file==NULL){
        printf("loi!!!\n");
        return 1;
    }
    printf("Noi dung trong file:\n");
    while(fgets(line,sizeof(line),file)!=NULL){
        printf("%s",line);
    }
    fclose(file);
    return 0;
}

