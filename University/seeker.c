#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp = fopen("file.txt","r");
	fseek(fp,5,SEEK_SET);
	int ch;
	while((ch=getc(fp))!=EOF){
		putc(ch,stdout);
	}
	fclose(fp);
	return 0;
}
