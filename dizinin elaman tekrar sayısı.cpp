#include <stdio.h>
#include <stdlib.h>
 
int main(){
    
    int dizi[101];
    int adet , sayac = 0;
    printf("kac adet sayi girilecek? ");
    scanf("%d",&adet);
    for(int i=0; i<adet; i++)
    {
        printf("%d. Sayi giriniz: ", i+1);
        scanf("%d", &dizi[i]);
}
    for(int i=0; i<adet; i++)
    {
        sayac = 1;
        for(int j=i+1; j<adet; j++)
         {
            if(dizi[i] == dizi[j]){
                sayac++;
                dizi[j] = -1;
         }
     }
     if(dizi[i] != -1){
	 
         printf("%d\t%d adet\n", dizi[i], sayac);
     }
    }    

    return 0;
}
