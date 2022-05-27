#include<stdio.h>
#include<conio.h>
int main(){
	for(int i=0;i<=100;i++){
		if(((2*i)+5)%3==0){
			printf("%d\n",i);
		}
	}
	getch();
	return 0;
}
