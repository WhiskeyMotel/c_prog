#include <stdio.h>
#include <stdlib.h>
#define ENG 26

void encrypt (int n){
	FILE *fp1=fopen ("in.txt" , "r");
	FILE *fp2=fopen ("out.txt" , "w");
	char c;
	while ((c=getc(fp1))!=EOF){
		if (c>='A' && c<='Z'){
			c=c+(n%ENG);
			if (c>='Z')
				c='A'+(c-'Z')-1;
			fprintf (fp2, "%c", c);//куда, формат, что
		}else if (c>='a' && c<='z'){
			c=c+(n%ENG);
			if (c>='z')
				c='a'+(c-'z')-1;
			fprintf (fp2, "%c", c);//куда, формат, что
		}else if(c==' '){
			fprintf(fp2, "%c", c);
		}
	}
	fclose (fp1);
	fclose (fp2);
}

void decrypt (int n){
	FILE *fp1=fopen ("in.txt" , "r");
	FILE *fp2=fopen ("out.txt" , "w");
	char c; 
	while ((c=getc(fp1))!=EOF){
		if (c>='A' && c<='Z'){
			char d=c-(n%ENG);
			if (c<'A')
				c='Z'-('A'-d)+1;
			fprintf (fp2, "%c", c);
		}else if (c>='a' && c<='z')	{
			char d;
			d=c-(n%ENG);
			if (d<'a')
				d='z'+1-('a'-d);
			fprintf (fp2, "%c", d);//куда, формат, что
		}else if(c==' '){
			fprintf(fp2, "%c", c);
		}
	}
	fclose (fp1);
	fclose (fp2);
}

int main ()
{
    int n; 
	char c;
    printf ("Enter shift n: ");
    scanf ("%d", &n);
    getchar (); 
    if (n<1) return 0;
    printf ("encrypt (a) decrypt(b) ");
    scanf ("%c", &c, 1);
    if (c == 'a') encrypt (n);
    if (c == 'b') decrypt (n);
    return 0;
}
