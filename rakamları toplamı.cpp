#include<stdio.h>
#include<conio.h>
int main(){
	int sayi,ilksayi,k,toplam;
	int i=0;
	toplam=0;
	printf("sayiyi giriniz");
	scanf("%d",&sayi);
	ilksayi=sayi;
	while (sayi>0){
		k= sayi % 10;
		sayi= sayi/10;
		toplam= toplam+k;
		i++;
		
	}
	printf("Girdiginiz %d sayisinin rakamlari toplami= %d\n", ilksayi, toplam);
	printf("girdiginiz sayi %d haneli sayi",i);
	getch();
	return 0;
}
