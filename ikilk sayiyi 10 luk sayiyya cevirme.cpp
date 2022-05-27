#include<stdio.h>
int main(){
	float ikil_sayi;
	float basamak,ikininkati=1,toplam=0;
	printf("2 lik sayi giriniz: "); scanf("%f",&ikil_sayi);
	while (ikil_sayi>0){
		basamak=ikil_sayi%10;
		toplam=toplam+(basamak*ikininkati);
		ikininkati=ikininkati*2;
		ikil_sayi=ikil_sayi/10;
	}
	printf("%f",toplam);
}
