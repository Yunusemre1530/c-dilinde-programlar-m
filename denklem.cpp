#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,b,c;
	float x1,x2;
	float delta;
	printf("A katsayisini giriniz");
	scanf("%d",&a);
	printf("B katsayisini giriniz");
	scanf("%d",&b);
	printf("C katsayisini giriniz");
	scanf("%d",&c);
	delta= b*b-4*a*c;
	x1=(-b+(sqrt(delta)) )/2*a;
	x2=(-b-(sqrt(delta)) )/2*a;
	printf("1. kok= %.1f\n",x1);
	printf("2. kok= %.1f\n",x2);
	getch();
	return 0;
}
