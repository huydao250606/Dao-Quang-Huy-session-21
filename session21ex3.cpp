#include<stdio.h>
#include<stdlib.h>

int main(){
	char input[256];
	FILE *file;
	file=fopen("bt01.txt","a");
	if(file==NULL){
		printf("loi!!\n");
		return 1;
	}
	printf("nhpa chuoi de ghi vao file\n");
	fgets(input,sizeof(file),stdin);
	fprintf(file,"%s",input);
	fclose(file);
	printf("ghi thanh cong");
	
	return 0;
}
