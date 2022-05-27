#include<stdio.h>
#include<conio.h>
int main(){
	float sayi[10];
	float toplam=0,ort;
	for (int i=0;i<10;i++){
		printf("%d. sayiyi giriniz",i+1);
		scanf("%f", &sayi[i]);
		toplam=toplam+sayi[i];
		
	}
	printf("girdiginiz 10 sayinin toplami = %.1f\n",toplam);
	ort=toplam/10;
	printf("ortalamanýz = %.1f\n",ort);
	for (int i=0;i<10;i++){
	 	 if (ort<=sayi[i]){
			printf("%.1f sayisi ortalamadan buyuk\n",sayi[i]);
		}
		else {
			printf("%.1f sayisi ortalamadan dusuk\n",sayi[i]);
		}
	}
	getch ();
	return 0;
}
