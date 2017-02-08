#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main (void){
	setlocale(LC_ALL,"Rus");
	int i=0;
	sleep(1);
	printf("Вечер в хату, господа! С вами Юрий...");
	sleep(2);
	printf("а, сорри, перепутал чутка.\n");
	sleep(1);
	printf(" С вами мегафлешка группы Альфа.\n Ваши действия будут записаны, поэтому...\n Если вы уверены, что хотите работать со мной,\n то введите Y чтобы продолжить, а если нет,\n то введите N.\n");
	printf("Определись с выбором: ");
	while (!feof(stdin)) {
		int c = getchar();
		switch (c){
		case 'N':
			printf("Ну и пожалуйста, ну и не нужно!");
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
	printf("Лааадненько, вы согласились на сотрудничество. Что же, приступим!\n");
	sleep(1);
	time_t timer=time(NULL);
	fprintf(logs, "\n--Started session at %s\n", ctime(&timer));
	printf("Окей, во мне куча софта, нужного всем и всегда. Поэтому, давай посмотрим что во мне есть\n");
	printf("1.AdGuard\n2.CCleaner\n3.ClassicShell\n4.CoffeeDownloader (Необходима Java, portable)\n5.Firefox (Internet install)\n6.Chrome (Internet install)\n7.KMS (Windows/Offfice Activator, portable)\n8.Notepad++\n");
	printf("9.OEMInfoUpdater (Portable)\nA.Opera (Internet install)\nB.Skype (Internet install)\nC.Sony Vegas 12.0 x64\nD.Steam (Internet install)\nE.Total Commander\nF.UnparkCPU (Portable)\nG.uTorrent\n");
	sleep(1);
	printf("Выбирай, что хочешь: ");
	while (!feof(stdin)) {
	int r=getchar();
	switch (r){
		case '1':
			timer=time(NULL);
			fprintf(logs, "%s --Installing AdGuard...", ctime(&timer));
			printf("Так, смотри, тут не все просто. Сначала мы установим саму программу, а потом крякнем ее.\n");
			system("start Soft/AdGuard/setup.exe");
			printf("Если установка завершилась, то нажми Enter, чтобы установить патч.\n");
			getch();
			fprintf(logs, "succesful.\n");
			fprintf(logs, "--Installing patch for AdGuard...");
			system("start Soft/AdGuard/patch.exe");
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если ты закончил работу и закрыл прогу, жми Enter.\n");
			getch();
			fprintf(logs, "--Process closed.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если ты закончил работу и закрыл программу, жми Enter.\n");
			getch();
			fprintf(logs, "--Process closed.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если ты закончил работу и закрыл программу, жми Enter.\n");
			getch();
			fprintf(logs, "Process terminated.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если ты закончил работу и закрыл программу, жми Enter.\n");
			getch();
			fprintf(logs, "--Process terminated.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
			printf("Окей, если все установилось, жми Enter.\n");
			getch();
			fprintf(logs, "succesful.\n");
			printf("Так, ну а теперь смотри. Если ты хочешь продолжить установку других программ, введи R. Ну а если ты закончил, введи E.\nИ твой ответ: ");
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
