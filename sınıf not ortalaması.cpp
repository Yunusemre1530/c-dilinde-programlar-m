#include<stdio.h>
#include<conio.h>
int main(){
	int i;
	int a,dizi [i];
	
	float ortalama,toplam=0;
	printf("siniftaki ogrenci sayisini giriniz: ");
	scanf("%d",&a);
	for (i=0;i<a;i++){
		printf("%d. ogrencinin notu= ",i+1);
		scanf("%d", &dizi [i]);
		toplam=toplam+dizi [i];
		
	}
	ortalama=toplam/a;
	printf("sinif ortalamasi= %.2f\n",ortalama);
	
	int enk=dizi[0];
	int enb=dizi[0];
	
for (i=0;i<a;i++){
        if(dizi[i]<enk){
		enk=dizi[i];
	}
        if (dizi[i]>enb){
		enb=dizi[i];
	}
}
	printf("sinifin en buyuk notu = %d\n",enb);
	printf("sinifin en dusuk notu = %d",enk);
	getch();
	return 0;
	
}
