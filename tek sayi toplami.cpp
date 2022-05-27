#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int i;
	int b=1;
	int toplam=0;
	printf("kaç sayi toplanacak");
	scanf("%d", &a);
	for(i=1; i<=a; i++){
		printf("%d. sayi= %d\n", i, b);
		
		b=b+2;
		toplam=toplam+b;
		}
		toplam+=1;
		printf("0 dan %d ye/ya kadar olan tek sayilarin toplami= %d", b, toplam);
		getch();
		return 0;
}
