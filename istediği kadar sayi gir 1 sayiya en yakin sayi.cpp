#include<stdio.h>
#include<conio.h>
int main(){
	int a,b=1,c,i,dizi[1000],d;
	printf("kac sayi girilecek: ");
	scanf("%d",&a);
	for(i=0;i<a;i++){
		printf("%d. sayiyi girin: ",b++);
		scanf("%d",&dizi[i]);
	}
		int fark=1000;
	printf("Bir sayi giriniz;");
	scanf("%d",&c);
	int eny=dizi[0];
		for(i=0;i<a;i++){
				if(dizi[i]-c<0){
		 d=-(dizi[i]-c);
	}
	else {
		d=dizi[i]-c;
	}
			if( fark>d){
				fark=d;
				eny=dizi[i];
			}
		}
         printf("en yakin sayiyla arasindaki fark= %d\n",fark);
         printf("en yakin sayi = %d",eny);
getch();
return 0;
}
