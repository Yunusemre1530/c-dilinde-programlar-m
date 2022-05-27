#include<stdio.h>
#include<conio.h>
int dogrusal_arama(int dizi[],int k,int istenen){
	int i;
	for(i=0;i<k;i++){
		if(dizi[i]==istenen){
		  return i;
	    }
	}
	return -1;
	
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
	int terim=dogrusal_arama(dizi,k,istenen);
    if (terim==-1){
    	printf("Aranan eleman yoktur");
	}
	else
	   printf("Aranan eleman vardir ve dizinin %d. elemanidir",terim+1);
}
