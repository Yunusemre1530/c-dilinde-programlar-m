#include<stdio.h>
#include<conio.h>
int main() {
	int i;
	int sayi[4];
	int toplam=0;
	for(i=0;i<4;i++){ 
	printf("%d. sayiyi girin",i+1);
	scanf("%d",&sayi[i]);
	toplam+=sayi[i];
	
	}	
	printf("girdiginiz sayilarin toplami= %d",toplam);
getch();
return 0; 
}
