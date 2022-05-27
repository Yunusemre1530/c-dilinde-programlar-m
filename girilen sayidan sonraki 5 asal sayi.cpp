#include<stdio.h>
#include<conio.h>
int main(){
	int a,sayac=1,i,b=0,dizi[1000],c,d=1;
	printf("bir sayi giriiniz: ");
	scanf("%d",&a);
	c=a;
	while(sayac<=5){
		for(i=2;i<a;i++){
			if(a%i==0){
				a++;
				i=2;
			}
		}
		dizi[b++]=a;
		sayac++;
		a++;
	}
	printf("%d den dan sonraki 5 asal asayi\n",c);
	for(b=0;dizi[b]!='\0';b++){
		printf("%d.sayi: %d\n",d++,dizi[b]);
	}
	getch();
	return 0;
}
