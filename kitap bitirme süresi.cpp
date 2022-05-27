#include<stdio.h>
#include<conio.h>
int main(){
	int i,a,b,sayac=0;
	printf("ilk gun okudugu sayfa sayisini giriniz: ");
	scanf("%d", &i);
	printf("gunluk okudugu sayfa sayisini giriniz: ");
	scanf("%d", &a);
	printf("kitabýn sayfa sayisini giriniz: ");
	scanf("%d", &b);
	for (;i<=b;i=i+a){
		sayac=sayac+1;
		
	}
	printf("kitabi bitirme suresi= %d",sayac);
	getch();
	return 0;
}
