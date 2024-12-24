#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *file;
	file= fopen("bt01.txt","r");
	if(file==NULL){
		printf("loi\n");
		return 1;
	}
	char line[256];
	fgets(line,sizeof(line),file);
	printf("dong dau tien la: %s",line);
	fclose(file);
	return 0;
}
