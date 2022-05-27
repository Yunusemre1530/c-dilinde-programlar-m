#include<stdio.h>
#include<conio.h>
int main(){
	int i,a,b,sayac1,sayac2;
	char kelime1[100],kelime2[100];
	printf("1.kelimeyi giriniz: ");
	gets(kelime1);
	printf("2.kelimeyi giriniz: ");
	gets(kelime2);
	for(b=0;kelime1[b]!='\0';b++);
	for(a=0;kelime2[a]!='\0';a++);
	  if (b > a || a>b){
	  	printf("kelimeler esit degil");
	  	getch();
	  	return 0;
	  }
for(i=0;i<a;i++){
	  	if (kelime1[i] != kelime2[i]){
	  		printf("kelimeler esit degil ");
	  		getch();
	  		return 0;
		  }
}
printf("girdiginiz kelimeler esittir");
getch();
return 0;
	  
}
