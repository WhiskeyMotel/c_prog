#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Rus");
	char file_name[50];
	char test1[]="git add ";
	printf("������� ��� �����: ");
	gets(file_name);
	system(strcat(test1, file_name));
	char test2[]="git commit -m ";
	printf("������� ������ (�� 500 ��������, � ���������): ");
	char commit[500];
	gets(commit);
	system(strcat(test2, commit));
	system("git push");
	printf("��� ������, ������� ����� ������ ����� ���������");
	getch();
	return 0;
}
