#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void sayisalloto(){
 srand(time(NULL));
  for(int i=1;i<=6;i++){
  	printf("%d.kolon: ",i);
  	for(int j=1;j<=6;j++){
  		printf("%d\t",1+rand()%50);
	  }
	  printf("\n");
  }
}
int main(){
	sayisalloto();
}
