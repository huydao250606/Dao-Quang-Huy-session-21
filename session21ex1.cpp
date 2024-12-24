#include<stdio.h>
#include<stdlib.h>

int main(){
	char input[256];
	FILE *file;
	file=fopen("bt01.txt","w");
	if(file==NULL){
		printf("khong mo duoc file\n");
		return 1;
	}
	printf("nhap chuoi: ");
	fgets(input,sizeof(input),stdin);
	fprintf(file,"%s",input);
	fclose(file);
	printf("da ghi thanh cong!!!");
	
	return 0;
}
