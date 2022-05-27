#include<stdio.h>
#include<conio.h>
int main (){
	int ilksayi=1;
	int ikincisayi=1;
	int i,a,b=1;
	printf("kac terimli bir fibonacci dizisi olacak: ");
	scanf("%d",&a);
	int fibonacci[99];
	printf("%d\n%d\n",ilksayi,ikincisayi);
	for (i=0 ;i<a ;i++){
		int temp= ikincisayi;
		ikincisayi=ilksayi+ikincisayi;
		ilksayi=temp;
		printf("%d\n",ikincisayi);
		fibonacci[i]=ikincisayi;
	}
	for (i=0;i<a;i++){
		if(fibonacci[i]%3==0){
			printf("fibonacci teriminin 3 e tam bolunen %d. sayisi = %d\n",b++,fibonacci[i]);
		}
	}
	
	
	return 0;
}
