#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char ** argv){
	setlocale(LC_ALL,"Rus");
	unsigned long count=0;
	FILE *fp;	//file pointer
	if (argc!=2){
		printf("Incorrect number of arguments");
		exit(EXIT_FAILURE); //EXIT_SUCCESS=0
		}
		fp=fopen(argv[1],"r"); //r-read, w-rewrite file, a-append(add something to file), r+-read/write, w+-read/delete'n'write, a+-read/write_to_end
		if(fp==NULL){
			printf("Cannot open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		int ch;
		while ((ch=getc(fp))!=EOF){ //end of file (-1)
			putc(ch, stdout);
			count++;
		}
		fclose(fp); //file close
		printf("\n%s consists %lu bites\n", argv[1], count);
		return 0;
}
