#include <stdio.h>
#include <stdlib.h>

int main(void){
	FILE *fp = fopen("nums.txt","r");
	FILE *out = fopen ("result.txt", "w");
	int value;
	//while(fscanf(fp,"%D", &value)==1){
	//fprintf(out, "%D\n", value+10);
	//}
	fscanf(fp, "%d", &value);
	fprintf(out, "%d\n", value+10);
	fscanf(fp, "%d", &value);
	fprintf(out, "%d\n", value+10);
	scanf(fp, "%d", &value);
	fprintf(out, "%d\n", value+10);
	fscanf(fp, "%d", &value);
	fclose(fp);
	fclose(out);
	return 0;
}
