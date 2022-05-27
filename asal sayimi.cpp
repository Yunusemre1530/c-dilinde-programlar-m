#include<stdio.h>
#include<conio.h>
int main(){
	int sayi,i,a=0;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	if(sayi==2){
		printf("%d asal sayidir",sayi);
		getch();
		return 0;
	}
	for (i=2;i<sayi;i++){
		if(sayi%i==0){
			printf("%d sayisi asal degildir\n",sayi);
		getch();
		return 0;
		}
	}
	printf("%d sayisi asaldir",sayi);
	getch();
	return 0;
}
