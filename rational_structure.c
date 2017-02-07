#include <iostream>
#include <stdio.h>
#include <math.h>
struct rational{
	int m;
	double n;
};
struct rational sum(struct rational r1, struct rational r2){
	struct rational res;
	res.m=(r1.m*r2.n)+(r2.m*r1.n);
	res.n=r1.n*r2.n;
	return res;
}
struct rational multi(struct rational r1,struct rational r2){
	struct rational mult;
	mult.m=r1.m*r2.m;
	mult.n=r1.n*r2.n;

	return mult;
} 
struct rational div(struct rational r1, struct rational r2){
	struct rational div;
	div.m=r1.m*r2.n;
	div.n=r1.n*r2.m;
	if (div.n==0){
	div.m=-1;
	div.n=-1;
}
	return div;
}
int nod(int x, int y){
	if(x!=0)
	return nod(y%x,x);
	else
	return y;
}
struct rational red(struct rational r1){
	struct rational res;
	res.m=r1.m/nod(r1.m,r1.n);
	res.n=r1.n/nod(r1.m,r1.n);
	return res;
}
void abs(struct rational *x){
	if (x->m<0 && x->m<0){
	x->m=-x->m;
	x->n=-x->n;
}
}
int main(int argc, char** argv) {
struct rational rat,rat1,res;
scanf("%d %d", &rat.m,&rat1.m);
scanf("%lf %lf", &rat.n,&rat1.n);
if (rat.n==0 || rat1.n==0){
	printf("error");
	exit(1);
}
res=sum(rat,rat1);
abs(&res);
printf("Summ: %d / %lf \n",res.m,res.n);
res=multi(rat,rat1);
abs(&res);
printf("Multiple: %d / %lf \n",res.m,res.n);
res=div(rat,rat1);
abs(&res);
printf("Division: %d / %lf \n", res.m,res.n);
printf("NOD1: %d / %lf \n", red(rat).m,red(rat).n);
printf("NOD2: %d / %lf \n", red(rat1).m,red(rat1).n);
printf("1: %d / %lf \n", rat.m,rat.n);
printf("2: %d / %lf \n", rat1.m,rat1.n);
return 0;
}



