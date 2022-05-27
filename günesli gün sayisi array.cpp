#include<stdio.h>
#include<conio.h>
int main(){
	int ay[12];
	int i,toplam=0;
	for (i=0;i<12;i++){
		printf("%d. aydaki günesli gün sayisini giriniz",i+1);
		scanf("%d", &ay[i]);
		toplam+=ay[i];
	}
	printf("12 aydaki toplam günesli gün sayisi = %d",toplam);
	getch();
	return 0;
}
