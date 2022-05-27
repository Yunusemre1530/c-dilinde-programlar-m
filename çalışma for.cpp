#include<stdio.h>
#include<conio.h>
int main(){
	int i, n, a;
	int toplam=0;
	printf("kac sayi ile islem yapacaksiniz\n");
	scanf("%d", &n);
	for (i=1;i<=n;i++){
		printf("%d. sayiyi giriniz\n",i);
		scanf("%d", &a);
		toplam=toplam+a;
		printf("Girdiginiz %d sayinin toplami=%d\n", i,toplam);
	}
	printf("nihai toplam= %d",toplam);
	getch();
	return 0;
}
