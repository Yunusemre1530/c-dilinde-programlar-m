#include<stdio.h>
#include<conio.h>
int main(){
	int toplam=0;
	int i=0;
	while ( i<=10){
		if(i%2==1){
			i++;
			continue;
		}
		toplam+=i;
		i++;
	}
	i-=1;
	printf("0 dan %d ye/ya kadar olan cift sayilar toplami= %d",i,toplam);
	getch();
	return 0;
}
