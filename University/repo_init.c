#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Rus");
	char file_name[50];
	char test1[]="git add ";
	printf("Введите имя файла: ");
	gets(file_name);
	system(strcat(test1, file_name));
	char test2[]="git commit -m ";
	printf("Введите коммит (до 500 символов, с кавычками): ");
	char commit[500];
	gets(commit);
	system(strcat(test2, commit));
	system("git push");
	printf("Все готово, нажмите любую кнопку чтобы закончить");
	getch();
	return 0;
}
