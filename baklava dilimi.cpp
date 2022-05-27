#include<stdio.h>
#include<conio.h>
int main(){
	int satir,i,j,bosluk=0,a,b=0,c=0;
	printf("satir sayisini giriniz: ");
	scanf("%d",&satir);
	for( i=satir/2;i>0;i--){
		a=i;
				for( j=i;j>0;j--){
			printf("*");
			
	}
		for(int k=0;k<bosluk;k++){
			printf(" ");
	}
	  
	    for( j=a;j>0;j--){
			
			printf("*");
    }
	    bosluk+=2;
		printf("\n");
}
	for( i=0;i<satir/2;i++){
    	for( j=0;j<i+1;j++){
			printf("*");
		}
		for(int k=bosluk-2;k>0;k--){
			printf(" ");
		}
    	for( j=0;j<i+1;j++){
			printf("*");
		}
		bosluk-=2;
		printf("\n");
	}
getch();
return 0;
}
 
