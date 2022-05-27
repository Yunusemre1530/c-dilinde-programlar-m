#include<stdio.h>
#include<conio.h>
int main (){
	int carpim=1;
	int a,i;
	printf("carpim tablosu olusturulacak sayi girin");
	scanf("%d",&a);
	for (i=1;i<=10;i++){
		printf("%d * %d= %d\n",i,a,i*a);
	}
	getch();
	return 0;
}
