#include<stdio.h>
#include<stdlib.h>
int aranan_harf(char kelime[],char harf){
	int i;
	for(i=0;kelime[i]!='\0';i++){
		if(kelime[i]==harf){
			return 1;
		}
	}
}
int main(){
	char kelime[100];
	printf("kelimeyi giriniz: ");
	gets(kelime);
	char harf;
	printf("Aradiginiz harfi giriniz ");
	scanf("%c",&harf);
	int sonuc=aranan_harf(kelime,harf);
	if(sonuc==1)
	printf("kelimede aradiginiz harf vardir");
	else
	printf("kelimede aradiginiz harf yoktur");
}
