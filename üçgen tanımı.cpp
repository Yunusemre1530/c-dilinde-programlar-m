#include<stdio.h>
#include<conio.h>
int main(){
	int a,b,c;
  	printf("ucgenin birinci kenarini giriniz:");
  	scanf("%d",&a);
  	printf("ucgenin ikinci kenarini giriniz:");
  	scanf("%d",&b);
  	printf("ucgenin ucuncu kenarini giriniz:");
  	scanf("%d",&c);
    if (b+a>c>b-a){
  
  		if (a+c>b>a-c){
  			printf("girdiginiz sayilar ucgen olusturur\n");
  	}else{
  		printf("girdiginiz sayi ucgen olusturmaz\n");
	}
		
	}else if (b+a>c>b-a){
 	
  		if (b+c>a>b-c){ 
  			printf("girdiginiz sayilar ucgen olusturur\n");
  		}else {
  			printf("girdiginiz sayilar ��gen olusturmaz\n");
		}	  
    }else if (b+c>a>b-c){
  
  		if (a+c>b>a-c){
  			printf("girdiginiz sayilar ucgen olusturur\n");
  		}else{
  			printf("girdiginiz sayi ucgen olusturmaz\n");
		}
   }else if (b+c>a>b-c ){
  		if (b+a>c>b-a ){
  			printf("girdiginiz sayilar ucgen olusturur\n");
  		}else {
  			printf("girdiginiz sayilar ��gen olusturmaz\n");
		}	  
    }else if (c+a>b>c-a){
		if (a+b>c>a-b){ 
			printf("girdiginiz sayilar ucgen olusturur\n");
  		}else{
  		printf("girdiginiz sayi ucgen olusturmaz\n");
		}
   }else if (c+a>b>c-a){
  		if (b+c>a>b-c ){
  			printf("girdiginiz sayilar ucgen olusturur\n");
		}else {
  			printf("girdiginiz sayilar ��gen olusturmaz\n");
		}
	}
  getch();
  return 0;
//   kenarlar� verilen ��genin uygun olup olmad���n� bulan algoritma
  //x buyuknet.com
  
  
}
