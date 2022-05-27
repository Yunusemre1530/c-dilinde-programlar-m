#include<stdio.h>
#include<conio.h>
int main(){
	int i=0;
	int carpim=1;
	while (i<=10){
		carpim=i*i;
		
		
		printf("%d*%d =%d\n",i,i,carpim);
		i=i+2;
	}
	getch();
	return 0;
}
