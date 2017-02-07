#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#define Max_Size 10
char stack[Max_Size];
int top=-1;
void StackPrint(void){
	int i;
	for (i=0;i<Max_Size;i++){
		printf("%c ",stack[i]);
	}
}
bool StackisFull(void){
	return top>=Max_Size-1;
}
bool StackisEmpty(void){
	return top<0;
}
void StackPush(char a){
	if (StackisFull()){
		puts("Error");
		exit(1);
	}
	top++;
	stack[top]=a;
}
int StackPop(void){
	if (StackisEmpty()){
		puts("error");
		exit(2);
	}
	 stack[top]=0;
	 top--;
	 return top;
}
int multiPop(int n){
	int i,e;
	if (n>Max_Size){
		n=Max_Size;
	}
	for(i=0;i<n;i++){
		e=StackPop();
	}
	return e;
}
int is_balanced_stacks(char s[],int n){
	int i,a;
	a=1;
	for(i=0;i<n;i++){
		if (s[i]=='(' || s[i]=='[' || s[i]=='{'){
		StackPush(s[i]);
	}
	else if (s[i]==')' || s[i]==']' || s[i]=='}'){
		if(StackisEmpty() || (s[i]==')' && stack[top]!='(')  || (s[i]=='}' && stack[top]!='{') || (s[i]==']' && stack[top]!='['))
			return 0;
		StackPop();
	}
	else
	if(top>-1)
		return 0;
	}
	if (top>-1)
		return 0;
	return a;
}
int main(int argc, char** argv) {
int i,a,n;
char s[]={'{','(','[',']',')','}'};
printf("%d\n",is_balanced_stacks(s,6));
return 0;
}

