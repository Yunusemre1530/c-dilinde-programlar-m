#include<stdio.h>
#include<conio.h>
int main(){
	char kelime[1000];
	printf("bir kelime giriniz: ");
	gets(kelime);
	printf("girilen kelimenin bas harfleri: ");
	for (int i=0;kelime[i]!='\0';i++){
		 if(i==0){
		 	printf ("%c ",kelime[i]);
		 }
		 	if(kelime[i]==' '){
		 		printf("%c ",kelime[i+1]);
			 }
		 }
	
	getch();
	return 0;
}
