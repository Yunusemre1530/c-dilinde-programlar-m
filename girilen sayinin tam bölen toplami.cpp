#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int b=1;
	int toplam=0;
	printf("Bir sayi giriniz: ");
	scanf("%d", &a);
	for(int i=1;i<a;i++){
		if(a%i==0){
		toplam+=i;
	    printf("%d.bolen %d\n",b,i);
	    b++;
		}
	}
	printf("girdiginiz sayinizin kendisi haric tam bolen toplami= %d\n",toplam);
	if (toplam==a){ 
	printf("girdiginiz sayi mukemmel sayidir");
	}
	else {
	}
getch();
return 0;
}
