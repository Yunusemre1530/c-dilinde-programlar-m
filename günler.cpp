#include<stdio.h>
#include<conio.h>
int main(){
	int sayi;
	printf("1 ile 7 arasinda sayi giriniz\n");
	scanf("%d",&sayi);
	switch (sayi){
		case 1:
			printf("pazartesi");
			break;
		case 2:
			printf("sal�");
			break;
		case 3:
			printf("�ar�amba");
			break;
		case 4:
			printf("peer�embe");
			break;
		case 5:
			printf("cuma");
			break;
		case 6:
			printf("cumartesi");
			break;
		case 7:
			printf("pazar");
			break;
		default:
		printf("oyle bir gun yok gerizekali");	
	}
	getch();
return 0;
}
