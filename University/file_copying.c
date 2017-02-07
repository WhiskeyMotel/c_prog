#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main (int argc, char ** argv){
	setlocale(LC_ALL,"Rus");
	unsigned long count=0;
	FILE *source, *dest;	//file pointer
	if (argc!=3){
		printf("Incorrect number of arguments");
		exit(EXIT_FAILURE); //EXIT_SUCCESS=0
		}
		source=fopen(argv[1],"r"); //r-read, w-rewrite file, a-append(add something to file), r+-read/write, w+-read/delete'n'write, a+-read/write_to_end
		dest=fopen(argv[2], "w");
		if(source==NULL){
			printf("Cannot open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		if(dest==NULL){
			printf("Cannot open file %s\n", argv[2]);
			exit(EXIT_FAILURE);
		}
		int ch;
		while ((ch=getc(source))!=EOF){ //end of file (-1)
			putc(ch, dest);
			count++;
		}
		fclose(source); //file close
		fclose(dest);
		printf("\n%s consists %lu bites\n", argv[2], count);
		return 0;
}
//fscanf-גגמה ג פאיכ, fprintf-גûגמה טח פאיכא
