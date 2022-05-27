#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	int sayac=0;
	for (int i=100;i<1000;i++){
		a=i/100;
		b=i%100;
		b=b/10;
		c=i%10;
		if (a!=b && b!=c && a!=c){
			printf("%d\n",i);
			sayac++;
		}
	}
	printf("100 den 1000 e kadar rakamlari farkli %d sayi var",sayac);
	getch();
	return 0;
}
