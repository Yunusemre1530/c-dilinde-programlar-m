#include<stdio.h>
#include<conio.h>
int main() {
	int sayac=0;;
	int sayi[20],sayip=0;
	float PozOrt,Ort,toplam=0,toplamp=0;
	for(int i=0;i<=19;i++){
		printf("%d.sayiyi giriniz: ",i+1);
		scanf("%d",&sayi[i]);
		toplam+=sayi[i];
		if(sayi[i]>100 && sayi[i]<200){
		sayac++;	
		}
	}
	Ort=toplam/20;
	    printf("20 sayinin ortalamasi = %.1f\n",Ort);
	for(int j=0;j<20;j++){
		if(sayi[j]>0){
			toplamp+=sayi[j];;
			sayip++;
		}
	}
	PozOrt=toplamp/sayip;
	printf("Pozitif sayýlarýn ortalamasi= %.1f\n",PozOrt);
	 int enb=sayi[0];
	 int enk=sayi[0];
		for (int i=0;i<20;i++){
        if(sayi[i]<enk){
		enk=sayi[i];
	}
        if (sayi[i]>enb){
		enb=sayi[i];
	}
}
	printf("20 sayidan en kucuk olani= %d\n20 sayidan en buyuk olaný= %d\n",enk,enb);
	if(sayac>0){
	 printf("100 ile 200 arasi sayilar:\n");
	for(int l=0;sayi[l]!='\0';l++){
		if(sayi[l]>100 && sayi[l]<200){
			printf("%d ",sayi[l]);
		}
	}
}
	getch();
	return 0;
}
