#include<stdio.h>
#include<conio.h>
int main(){
	int maras,kayseri;
	printf("marasin nufusunu giriniz: ");
	scanf("%d",&maras);
	printf("kayserinin nufusunu giriniz: ");
	scanf("%d",&kayseri);
	int yil=0;
	while(kayseri>maras){
		maras=maras+(maras*(5/2));
		kayseri=kayseri+(kayseri*(7/5));
		yil++;
	}
	printf("%d yil sonra maras kayseriyi gecer\nmarasin nufusu= %d\nkayserinin nufusu= %d",yil,maras,kayseri);
	getch();
	return 0;
}
