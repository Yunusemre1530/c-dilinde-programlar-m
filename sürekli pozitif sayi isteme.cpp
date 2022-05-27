#include<stdio.h>
#include<conio.h>
void sayiiste(){
	int a;
	printf("pozitif bir sayi giriniz:");
	scanf("%d",&a);
	if(a<0){
		printf("negatif sayi girdiniz:\n");
			sayiiste();
	}
	else if(a==0){
		printf("ne negatif ne pozitif sayi girdiniz\n");
		sayiiste();
	}
	else{
		printf("tebrikler pozitif sayi girdiniz...\n");
	
	}
}

int main(){
sayiiste();
}
