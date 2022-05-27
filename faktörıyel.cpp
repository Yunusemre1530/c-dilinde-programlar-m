#include<stdio.h>
#include<conio.h>
int main(){
	int a;
	int fact=1;
	printf("faktoriyel alinacak sayiyi giriniz: ");
	scanf("%d",&a);
	while (a!=0){
		printf("%d\n",a);
		fact=fact*a;
		a--;
	}
	printf("sonuc: %d",fact);
	getch();
	return 0;
}
