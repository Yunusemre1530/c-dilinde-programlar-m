#include<stdio.h>
#include<conio.h>
int ikili_arama(int dizi[],int bas,int son,int istenen){
	while(son>=bas){
		int orta=dizi[(bas +son)/2];
		if(orta==istenen){
			return 1;
		}
		if(orta>istenen){
			son=orta;
		}
		if(orta<istenen){
			bas=orta;
		}
	}
}
int main(){
		int k;
	printf("Dizi kac terimli olacaktir? ");
	scanf("%d",&k);
	int dizi[k];
	int i;
	for(i=0;i<k;i++){
		printf("%d.sayiyi giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
	int istenen;
	printf("istenen sayi nedir? ");
	scanf("%d",&istenen);
	int terim=ikili_arama(dizi,0,k-1,istenen);
	if(terim==1){
		printf("Aradiginiz eleman vardir");
	}
	else
	   printf("Aradiginiz eleman yoktur");
}
