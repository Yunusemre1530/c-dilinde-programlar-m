#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int a,b,sonuc;
	printf("islem yapilacak sayiyi giriniz: ");
	scanf("%d",&a);
  	printf("islem yapilacak ussu giriniz: ");
	scanf("%d",&b);
	sonuc=pow(a,b);
	printf("%d",sonuc);
	getch();
	return 0;	
}
