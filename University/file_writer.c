#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp = fopen("words.txt","a+");
	char word [50];
	while((fscanf(stdin, "%10s", word)==1)&&(word[0]!='#')){
		fprintf(fp, "%s\n", word);
	}
	rewind(fp);//smechenie na nachalo faila
	while(fscanf(fp, "%s", word)==1){
		puts(word);
	}
	fclose(fp);
	return 0;
}
//fseek(fp, offset, start);
//start: SEEK_SET(ot nachala faila),  SEEK_END(ot konca faila), SEEK_CUR(ot tekuchego mesta v faile)
