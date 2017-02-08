#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main (void){
	setlocale(LC_ALL,"Rus");
	int i=0;
	sleep(1);
	printf("����� � ����, �������! � ���� ����...");
	sleep(2);
	printf("�, �����, ��������� �����.\n");
	sleep(1);
	printf(" � ���� ���������� ������ �����.\n ���� �������� ����� ��������, �������...\n ���� �� �������, ��� ������ �������� �� ����,\n �� ������� Y ����� ����������, � ���� ���,\n �� ������� N.\n");
	printf("���������� � �������: ");
	while (!feof(stdin)) {
		int c = getchar();
		switch (c){
		case 'N':
			printf("�� � ����������, �� � �� �����!");
			exit(0);
		case 'Y':
			main_menu();
		}
	}
}

int main_menu(){
	system("cls");
	setlocale(LC_ALL,"Rus");
	log_boot();
	printf("�����������, �� ����������� �� ��������������. ��� ��, ���������!\n");
	sleep(1);
	time_t timer=time(NULL);
	fprintf(logs, "\n--Started session at %s\n", ctime(&timer));
	printf("����, �� ��� ���� �����, ������� ���� � ������. �������, ����� ��������� ��� �� ��� ����\n");
	printf("1.AdGuard\n2.CCleaner\n3.ClassicShell\n4.CoffeeDownloader (���������� Java, portable)\n5.Firefox (Internet install)\n6.Chrome (Internet install)\n7.KMS (Windows/Offfice Activator, portable)\n8.Notepad++\n");
	printf("9.OEMInfoUpdater (Portable)\nA.Opera (Internet install)\nB.Skype (Internet install)\nC.Sony Vegas 12.0 x64\nD.Steam (Internet install)\nE.Total Commander\nF.UnparkCPU (Portable)\nG.uTorrent\n");
	sleep(1);
	printf("�������, ��� ������: ");
	while (!feof(stdin)) {
	int r=getchar();
	switch (r){
		case '1':
			timer=time(NULL);
			fprintf(logs, "%s --Installing AdGuard...", ctime(&timer));
			printf("���, ������, ��� �� ��� ������. ������� �� ��������� ���� ���������, � ����� ������� ��.\n");
			system("start Soft/AdGuard/setup.exe");
			printf("���� ��������� �����������, �� ����� Enter, ����� ���������� ����.\n");
			getch();
			fprintf(logs, "succesful.\n");
			fprintf(logs, "--Installing patch for AdGuard...");
			system("start Soft/AdGuard/patch.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case '2':
			fprintf(logs, "--Installing CCleaner...");
			system("start Soft/CCleaner/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case '3':
			fprintf(logs, "--Installing ClassicShell...");
			system("start Soft/ClassicShell/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
		switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case '4':
			fprintf(logs, "--Running CoffeDownloader...\n");
			system("start Soft/CoffeeDownloader/run.jar");
			printf("����, ���� �� �������� ������ � ������ �����, ��� Enter.\n");
			getch();
			fprintf(logs, "--Process closed.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case '5':
			fprintf(logs, "--Installing Firefox...");
			system("start Soft/Firefox/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
		switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case '6':
			fprintf(logs, "--Installing Google Chrome...");
			system("start Soft/Google Chrome/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case '7':
			fprintf(logs, "--Running KMS...\n");
			system("start Soft/KMS/run.exe");
			printf("����, ���� �� �������� ������ � ������ ���������, ��� Enter.\n");
			getch();
			fprintf(logs, "--Process closed.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case '8':
			fprintf(logs, "--Installing Notepad++...");
			system("start Soft/Notepad++/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case '9':
			fprintf(logs, "--Running OEMInfoUpdater...\n");
			system("start Soft/OEMInfoUpdater/run.exe");
			printf("����, ���� �� �������� ������ � ������ ���������, ��� Enter.\n");
			getch();
			fprintf(logs, "Process terminated.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case 'A':
			fprintf(logs, "--Installing Opera...");
			system("start Soft/Opera/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case 'B':
			fprintf(logs, "--Installing Skype...");
			system("start Soft/Skype/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case 'C':
			fprintf(logs, "--Installing Sony Vegas 12.0...");
			system("start Soft/Sony Vegas 12.0/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case 'D':
			fprintf(logs, "--Installing Steam...");
			system("start Soft/Steam/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case 'E':
			fprintf(logs, "--Installing Total Commander...");
			system("start Soft/Total Commander/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case 'F':
			fprintf(logs, "--Running UnparkCPU...");
			system("start Soft/UnparkCPU/run.exe");
			printf("����, ���� �� �������� ������ � ������ ���������, ��� Enter.\n");
			getch();
			fprintf(logs, "--Process terminated.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
			case 'G':
			fprintf(logs, "--Installing uTorrent...");
			system("start Soft/uTorrent/setup.exe");
			printf("����, ���� ��� ������������, ��� Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("���, �� � ������ ������. ���� �� ������ ���������� ��������� ������ ��������, ����� R. �� � ���� �� ��������, ����� E.\n� ���� �����: ");
			while (!feof(stdin)) {
			int w=getchar();
			switch (w){
				case 'E':
					log_end();
				case 'R':
					log_restart();
				}
			}
		}
	}
	return 0;
}
