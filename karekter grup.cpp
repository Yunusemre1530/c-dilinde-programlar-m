#include<stdio.h>
#include<conio.h>
int main(){
	char kelime[1000];
	printf("kelime giriniz: ");
	gets(kelime);
    int i,a=0,b=0,c=0,d=0;
    char dizi1[1000], dizi2[1000], dizi3[1000], dizi4[1000];
	for (i=0;kelime[i]!='\0';i++){
		if(kelime[i]>=48 && kelime[i]<=57){
		dizi1[a]=kelime[i];
		a++;
		}
		if(kelime[i]>=65 && kelime[i]<=90){
			dizi2[b]=kelime[i];
		b++;	
		}
		if(kelime[i]>=97 && kelime[i]<=122){
			dizi3[c]=kelime[i];
		c++;	
		}
		if(kelime[i]>=33 && kelime[i]<=47){
			dizi4[d]=kelime[i];
		d++;	
		}
}
       if(a>0){
       	printf("Rakamlar:\n");
	for(a=0;dizi1[a]!='\0';a++){
		printf("%c",dizi1[a]);
	}
}
printf("\n");
       if(b>0){
       	printf("Buyuk harfler:\n");
	for(b=0;dizi2[b]!='\0';b++){
		printf("%c",dizi2[b]);
	}
}
printf("\n");
    if(c>0){
       	printf("Kucuk harfler:\n");
	for(c=0;dizi3[c]!='\0';c++){
		printf("%c",dizi3[c]);
	}
}
printf("\n");
    if(d>0){
       	printf("semboller:\n");
	for(d=0;dizi4[d]!='\0';d++){
		printf("%c",dizi4[d]);
	}
}
return 0;	
		
	
}
