#include<stdio.h>
#include<conio.h>
int main(){
	int sayi,birler,onlar,yuzler;
	int a;
	printf("3 basamakli sayi giriniz");
	scanf("%d",&sayi);
	birler=sayi%10;
	a=sayi/10;
	onlar=a%10;
	yuzler=sayi/100;
	switch (yuzler){
		case 1: 
		    printf("yuz ");
		    break;
		case 2:
			printf("iki yuz ");
			break;
		case 3: 
		    printf("uc yuz ");
		    break;
		case 4:
			printf("dort yuz ");
			break;	
		case 5: 
		    printf("bes yuz ");
		    break;
		case 6:
			printf("alti yuz ");
			break;	
		case 7: 
		    printf("yedi yuz ");
		    break;
		case 8:
			printf("sekiz yuz ");
			break;
		case 9: 
		    printf("dokuz yuz ");
		    break;
	}
	switch (onlar){
			case 1: 
		    printf("on ");
		    break;
		case 2:
			printf("yirmi ");
			break;
		case 3: 
		    printf("otuz ");
		    break;
		case 4:
			printf("kirk ");
			break;	
		case 5: 
		    printf("elli ");
		    break;
		case 6:
			printf("altmis ");
			break;	
		case 7: 
		    printf("yetmis ");
		    break;
		case 8:
			printf("seksen ");
			break;
		case 9: 
		    printf("doksan ");
		    break;
	}
	switch (birler) {
	
		case 1: 
		    printf("bir");
		    break;
		case 2:
			printf("iki ");
			break;
		case 3: 
		    printf("uç ");
		    break;
		case 4:
			printf("dort ");
			break;	
		case 5: 
		    printf("bes ");
		    break;
		case 6:
			printf("alti ");
			break;	
		case 7: 
		    printf("yedi ");
		    break;
		case 8:
			printf("sekiz ");
			break;
		case 9: 
		    printf("dokuz ");
		    break;
}
getch();
return 0;
}
