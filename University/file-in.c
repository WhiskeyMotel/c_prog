#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

int main (int argc, char ** argv){
	setlocale(LC_ALL,"Rus");
	FILE *fp;	//file pointer
	if (argc!=2){
		printf("Incorrect number of arguments");
		exit(EXIT_FAILURE); //EXIT_SUCCESS=0
		}
		fp=fopen(argv[1],"a+"); //r-read, w-rewrite file, a-append(add something to file), r+-read/write, 
		if(fp==NULL){
			printf("Cannot open file %s\n", argv[1]);
			exit(EXIT_FAILURE);
		}
		char string[50];
		printf("¬ведите ваш текст: ");
		fgets(string, 50, stdin);
		fprintf(fp, string);
		fclose(fp); //file close
		getch();
		return 0;
}
