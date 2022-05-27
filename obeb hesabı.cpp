#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,i;
	printf("once buyuk sayi ardindan kucuk sayiyi giriniz: ");
	scanf("%d %d",&a, &b);
	i=a-1;
	for(;i>1;i--){
		if(a%i==0 && b%i==0){
				printf("%d ve %d sayisinin obebi= %d",a,b,i);
				getch();
			return 0;
		}
	}
	printf("%d ve %d sayisinin ebobu yoktur",a,b);
	getch();
	return 0;
}
