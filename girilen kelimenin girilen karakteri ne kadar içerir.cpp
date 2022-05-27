 #include<stdio.h>
 #include<conio.h>
 int main(){
 	int i,sayac=0;
 	char kelime[100],karakter;
 	printf("kelime giriniz: ");
 	gets(kelime);
 	printf("karakter giriniz: ");
 	scanf("%c", &karakter);
 	for(i=0;kelime[i]!='\0';i++){
 		if(kelime[i]==karakter)
 			sayac++;
		 
	 }
	 printf("girdiginiz kelimenin icerdigi %c sayisi = %d",karakter,sayac);
	 getch();
	 return 0;
	 
 }
