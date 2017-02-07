#include <stdio.h> 

int main(void) 
{ 
	int a, b, c=0; 
	int ms[3]; 
	printf("Enter the number: "); 
	scanf("%d",&a); 
	for(;;) { 
		ms[0]=a%10; 
		ms[1]=(a%100)/10; 
		ms[2]=(a%1000)/100; 
		b=ms[0]*ms[0]+ms[1]*ms[1]+ms[2]*ms[2]; 
		if (b==1) { 
			printf("True"); 
			break; 
		} 
		if (b==4) { 
			c++; 
		} 
		if (c>=2){ 
			printf("False"); 
			break; 
		} 
		a=b; 
	} 
	return 0; 
}
