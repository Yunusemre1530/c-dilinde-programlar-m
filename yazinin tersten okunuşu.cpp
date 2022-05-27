#include<stdio.h>
#include<conio.h>
int main(){
	int i;
    char isim[100];
	printf("isim giriniz");
	gets(isim);
	for(isim[i]='\0';i>=0;i--){
		printf("%c",isim[i]);
	}
	getch();
	return 0;
}
