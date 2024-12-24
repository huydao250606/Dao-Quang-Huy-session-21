#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	file=fopen("bt01.txt","r");
	if(file==NULL){
		printf("khong mo duoc file");
		return 1;
	}
	char kitu=fgetc(file);
	printf("ki tu dau tien la: %c",kitu);
	fclose(file);
	return 0;
}
