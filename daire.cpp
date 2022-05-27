#include <stdio.h>
#include <conio.h>
 
#define pi 3.14
 
int main()
{
   //float p = 3.14;
  
    float r , cevre, alan ;
    
    printf("Yaricapi girin :");
    
    scanf("%f", &r);
    
    
    cevre=2*pi*r;
    
    alan=pi*r*r;
    
    printf ("Cevre olcusu : %f Alan olcusu : %f \n"  , cevre, alan );
           
    getch();
    return 0;
    // ekranýn kapanmasýný engelliyor..
}
