#include<stdio.h>
#include<conio.h>
int main(){
	int a,i;
	printf("Bir sayi giriniz: ");
	scanf("%d",&a);
	for (i=2;i<a;i++){
	for(i=2;i<a;i++){
		if(a%i==0){
			printf("girdiginiz sayi asal degildir\n");
			i=2;
			a++;
		
		}
		else if(a%i!=0){
			printf("girdiginiz sayiya en yakin asal sayi= %d",a);
			return 0;
		}
		}
	a=a+1;
	}
	
	getch();
	return 0;
}

