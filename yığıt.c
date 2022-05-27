#include<stdio.h>
#include<stdlib.h>

int boyut=2;
int *dizi;
int tepe=0;

int pop(){
		if(tepe<=boyut/4){
		int *dizi2=(int*)malloc(sizeof(int)*boyut/2);
		int i;
		for(i=0;i<boyut;i++){
			dizi2[i]=dizi[i];
		}
		free(dizi);
			for(i=0;i<boyut;i++){
			dizi[i]=dizi2[i];
		}
		boyut/=2;
	}
	return dizi[--tepe];
}

void push(int a){
	if(tepe>=boyut){
		int *dizi2=(int*)malloc(sizeof(int)*boyut*2);
		int i;
		for(i=0;i<boyut;i++){
			dizi2[i]=dizi[i];
		}
	    free(dizi);
		dizi=dizi2;
		boyut*=2;
	}
	dizi[tepe++]=a;
}
void bastir(){
	int i;
	for(i=0;i<tepe;i++){
		printf("%d\n",dizi[i]);
		
	}
}
int main(){
	dizi=(int*)malloc(sizeof(int)*2);
	printf("kac sayi girilecek ");
	int adet;
	scanf("%d",&adet);
	int i;
	for(i=0;i<adet;i++){
		int sayi;
		printf("%d.sayiyi giriniz",i+1); scanf("%d",&sayi);
		push(sayi);
	}
	bastir();
 /*   	printf("boyut=%d\n",boyut);*/	
	
	printf("kac sayi cikacaktir ");
	int cikan;
	scanf("%d",&cikan);
	for(i=0;i<cikan;i++){
		printf("popped= %d\n",pop());
	}
	bastir();
/*	printf("boyut=%d\n",boyut);
	for(i=0;i<boyut;i++){
			printf("%d\n",dizi[i]);
	}
	
*/	
	
	
}
