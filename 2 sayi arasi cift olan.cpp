#include<stdio.h>
#include<conio.h>
int main(){
	int i,sayi1,sayi2;
	printf("baslangic degeri giriniz");
	scanf("%d",&sayi1);
	printf("bitis degeri giriniz");
	scanf("%d",&sayi2);
	for (i=sayi1;i<=sayi2;i++){
		if (i % 2 == 0){
			printf("%d\n",i);
		}
	}
	
	return 0;
}
