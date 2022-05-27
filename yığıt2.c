#include<stdio.h>
int tepe=0;
void push(int dizi[],int a){
	dizi[tepe++]=a;
}
int pop(int dizi[]){
	return dizi[tepe--];
	
}
int main(){
	int N;
	printf("dizi kac elemanli olacaktir: ");
	scanf("%d",&N);
	int dizi[N];
	int i;
	for(i=0;i<N;i++){
		int sayi;
		printf("%d. sayiyi giriniz: ",i+1); scanf("%d",&sayi);
		push(dizi,sayi);
	}
	printf("kac sayi pop edilecek "); 
	int pops; scanf("%d",&pops);
	int top=tepe-1;
	for(i=0;i<pops;i++){
		printf("popped= %d\n",dizi[top--]);
	}
}
