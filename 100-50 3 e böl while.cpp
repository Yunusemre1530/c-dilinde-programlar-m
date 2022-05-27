#include<stdio.h>
#include<conio.h>
int main(){
int i=100;
int toplam=0;
while(i>50){
	if(i%3==0){
		toplam=toplam+i;
		i--;
	}
	else {
		i--;
	}
}
printf("100 den 50 ye kadar 3 e bölünen sayilar toplami= %d",toplam);
getch();
return 0;
}        
