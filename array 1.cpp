#include<stdio.h>
#include<conio.h>
int main(){
	float sayilar[5];
	int i;
	int a=1;
	float toplam=0;
	float ortalama;
	for(i=0;i<5;i++){
		printf("%d. sayiyi giriniz",a);
		scanf("%f",&sayilar[i]);
		a++;
	toplam+=sayilar[i];
}
ortalama=toplam/5;
a--;
    printf("girdiginiz %d sayinin toplami= %.1f\n",a,toplam);
	printf("girdiginiz %d sayinin ortalamasi= %.1f",a,ortalama);
	getch();
	return 0;
}

