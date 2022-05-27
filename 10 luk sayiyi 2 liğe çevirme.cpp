#include<stdio.h>
int main(){
	int sayi,ikininkati=1;
	printf("Bir sayi giriniz: "); scanf("%d",&sayi);
	while(ikininkati<sayi){
		ikininkati=ikininkati*2;
	}
	int toplam=0;
	while(ikininkati>=1){
		toplam=toplam+ikininkati;
		if(toplam<=sayi){
			printf("%d",1);
		}
		else{
			printf("%d",0);
			toplam=toplam-ikininkati;
		}
		ikininkati=ikininkati/2;
		
	}
	
}
