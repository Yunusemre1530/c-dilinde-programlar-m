#include<stdio.h>
int main(){
	int sayi;
	printf("sayi giriniz "); scanf("%d",&sayi);
    int r,n,toplam=0;
    n=sayi;
    	while(n>0){
    		r=n%10;
    		n=n/10;
    			toplam=(toplam*10)+r;
    	}
		if(sayi==toplam){
			printf("%d sayisi palindromdur.\n",toplam);
		}
	else
	printf("%d sayisi palindrom degildir.",toplam);
	
	return 0;
}
