#include<stdio.h>
int main(){
	int N;
	printf("N degerini giriniz: "); scanf("%d",&N);
	int i,j;
	for(i=1;i<=N;i++){
		for(j=i;j>0;j--){
			printf("%d ",j);
		}
		printf("\n");
	}
}
