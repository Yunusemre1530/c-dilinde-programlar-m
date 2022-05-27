#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	printf("bir sayi giriniz: ");
	scanf("%d",&a);
	for (int i=1;i<=10000000;i++){
		if((i*i)==a){
			printf("girdiginiz sayi tam karedir");
			getch();
			return 0;
		}
	}
	printf("girdiginiz sayi tam kare degildir");
	getch();
	return 0;
}
