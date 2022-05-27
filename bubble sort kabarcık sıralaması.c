#include<stdio.h>
void bubblesort(int dizi[],int N){
	int i,j;
	int gecici;
	for(i=0;i<N;i++){
		for(j=0;j<N-i-1;j++){
			if(dizi[j]>dizi[j+1]){
				gecici=dizi[j];
				dizi[j]=dizi[j+1];
				dizi[j+1]=gecici;
			}
		}
	}
		
}
int main(){
	int N;
	printf("Kac boyutlu dizi olacaktir? "); scanf("%d",&N);
	int dizi[N];
	int i;
	for(i=0;i<N;i++){
		printf("%d. sayiyi giriniz: ",i+1); scanf("%d",&dizi[i]);
	}
	bubblesort(dizi,N);
	for(i=0;i<N;i++){
		printf("%d.sayi: %d\n",i+1,dizi[i]);
}
	
}
/*5 1 2 9 7
1 5  2 9 7
1 2 5 9 7
1 2 5 7 9
*/ 
