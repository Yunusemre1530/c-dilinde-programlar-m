#include<stdio.h>
int main(){
	int baslangic,bitis;
	printf("baslangic degerini giriniz: "); scanf("%d",&baslangic);
	printf("bitis degerini giriniz "); scanf("%d",&bitis);
	int i,toplam;
	for(i=baslangic;i<=bitis;i++){
		int n=i;
		toplam=0;
		int j;
		while (n>0){
		j=n%10;
		toplam+=(j)*(j)*(j);
		n=n/10;
		}
		if(toplam==i)
		printf("%d sayisi amstrongtur\n",i);
	}
}
