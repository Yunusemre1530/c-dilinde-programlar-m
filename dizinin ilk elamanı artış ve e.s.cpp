#include<stdio.h>
#include<conio.h>
int main(){
	//a,b,i olacak þekilde 3 ayrý deðiþken tanýmlýyoruz
	int a,b,i;
    int diziterim;
    	printf("dizinin ilk terimini giriniz");
	    scanf("%d", &diziterim);
	    printf("dizinin artis miktarini giriniz");
	    scanf("%d",&a);
	    printf("dizinin eleman sayisini giriniz");
	    scanf("%d",&b);

	for (i=0;i<b;i++){
		printf("%d\n",diziterim);
		diziterim=diziterim+a;
	    }
	    diziterim-=a;
	    printf("sonuc= %d",diziterim);
		getch();
		return 0;
	
	
}
