#include<stdio.h>
int main(){
	int a;
	int d;
	int carpim=1;
	int toplam=0;
	printf("bir sayi giriniz "); scanf("%d",&a);
  d=a;
  int i;
  while(a>0){
  	int b;
  	b=a%10;
  	carpim=1;
  	for(i=1;i<=b;i++){
  	    carpim=carpim*i;
	  }
	  toplam+=carpim;
	  a=a/10;
	  }
 
   if(toplam==d){
  	printf("guclu sayidir");  	
  }
  else
  printf("guclu sayi degildir.");
}
