#include<stdio.h>
#include<conio.h>
int main(){
	int sayi,i;
	int toplam=0;
	for (i=0; true;i++){
	printf("sayiyi giriniz cikmak icin 0 a basin");
	scanf("%d",&sayi);
	if (sayi==0){
		break;
	}
	toplam+=sayi;
}
printf("girdiginiz sayilarin toplamý:%d",toplam);
return 0;
}
