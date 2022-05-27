#include<stdio.h>
#include<conio.h>
int main(){
   int matris [3][3];
   int i=0;
   int a=0;
   int j=0;
   int sun=0;
   for(i=0;i<3;i++){
   	  for(j=0;j<3;j++){
   	  	
   	  scanf("%d", &matris[i][j]);
   }
 }
   for(i=0;i<3;i++){
   	  for(j=0;j<3;j++){
   	  printf("%d ", matris[i][j]);
   	   
   }
   printf("\n");
}
     for(i=0;i<3;i++){
   	  for(j=0;j<3;j++){
   	  	sun+=matris[i][j];
   	  
   	  
   }
   a++;
   
  printf("%d. satir toplami = %d\n",a,sun);
  sun=0;

 }
 printf("\n");
 a=0;
    for(int j=0;j<3;j++){
   	  for(int i=0;i<3;i++){
   	  	sun+=matris[i][j];
   	  
   	  
   }
   a++;
   
  printf("%d. sutun toplami = %d\n",a,sun);
  sun=0;

 }


 getch();
 return 0;
}
