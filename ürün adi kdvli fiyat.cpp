#include<stdio.h>
#include<conio.h>
int main(){
	int fiyat,kdv=14;
	char ad[100];
    printf("urunun adini giriniz: ");
	gets(ad);
	printf("urunun fiyatini giriniz: ");
	scanf("%d",&fiyat);
	fiyat=fiyat+(fiyat*0.14);
	printf("urunun adi: %s\n",ad);
	printf("urunun yeni fiyati= %d",fiyat);
	getch();
	return 0;
	
	
}
