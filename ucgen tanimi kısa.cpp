#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
	printf("ucgenin birinci kenarini giriniz: ");
	scanf("%d",&a);
	printf("ucgenin ikinci kenarini giriniz: ");
	scanf("%d",&b);
	printf("ucgenin ucuncu kenarini giriniz: ");
	scanf("%d",&c);
	if (c<a+b && a<b+c && b<a+c){
		printf("girdiginiz sayi ucggen belirtir");
	}
	else {
	printf("girdiginiz sayi ucgen belirtmez");
}
	getch();
	return 0;
}
