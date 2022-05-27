#include<stdio.h>
#include<conio.h>
int main(){
	int s,a=1;
	printf("kac sutun olacak? ");
	scanf("%d",&s);
	for(int i=0;i<s;i++){
		for(int j=0;j<i+1;j++){
			printf("%d ",a++);
		}
		printf("\n");
	}
   getch();
   return 0;
}
