#include<stdio.h>
#include<conio.h>
int main(){
	int a,i;
	char kelime[10000];
	printf("bir kelime giriniz: ");
	gets(kelime);
	for(a=0;kelime[a]!='\0';a++){}
	for(i=a-1;i>=0;i--){
	printf("%c",kelime[i]);
	}
	getch();
	return 0;
}
