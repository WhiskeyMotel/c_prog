#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>
#include "whiskey.h"

//strcopy (откуда, куда) - сложение строк

int prog_install(){
	
}
int prog_boot(){
 	
 }
int log_boot(){
	FILE *logs;
	logs=fopen("log.txt","a+"); //r-read, w-rewrite file, a-append(add something to file), r+-read/write, 
	if(logs==NULL){
		printf("Cannot open file %s\n", "log.txt");
		exit(EXIT_FAILURE);
	}
}
int log_restart(){
	printf("ќкей, сейчас все сделаем\n");
	sleep(2);
	timer=time(NULL);
	fprintf(logs, "%s--Session restarted\n", ctime(&timer));
	fclose(logs);
	main_menu();
}
int log_end(){
	printf("Ќу, наше дело предложить - ваше дело отказатьс€. ƒо скорой встречи)");
	sleep(2);
	timer=time(NULL);
	fprintf(logs, "%s--Session ended\n", ctime(&timer));
	fclose(logs);
	exit(0);
}
int log_write(){
	timer=time(NULL);
	fprintf(logs, "%s --Installing %s...", ctime(&timer), &name);
}
