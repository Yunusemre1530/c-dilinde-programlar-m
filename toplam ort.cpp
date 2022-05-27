#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,i;
	float toplam, ortalama;
	toplam=0;
	printf("kac sayi girilecek: ");
	scanf("%d", &a);
	for (i=1; i<=a;i++){
		printf("%d. sayiyi giriniz: ",i);
		scanf("%d",&b);
		toplam= toplam+b;
		ortalama= toplam/i;
	}
	i-=1;
	printf("Girdiginiz %d sayinin toplami= %.1f\n",i ,toplam);
	printf("Girdiginiz %d sayinin ortalamasi= %.1f",i ,ortalama);
	getch();
	return 0;
}
