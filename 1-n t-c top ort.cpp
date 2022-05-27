#include <stdio.h>
#include <conio.h>

int main()
{

    int n, sayacT = 0, sayacC = 0, toplamT = 0, toplamC = 0, i;

    printf("Lütfen kontrol edilecek n degerini giriniz: ");
    scanf("%d", &n);

    if( n <= 0 )
    {
        printf("Lutfen 0 dan buyuk deger giriniz!");
        getch();
        return 0;
    }

    for ( i=1; i<=n; i++ )
    {

        if( i % 2 == 0)
        {
            toplamC+=i;
            sayacC++;
        }

        else
        {
            toplamT+=i;
            sayacT++;

        }

    }

    if( n != 1)
    {
        printf("****Cift Sayilar***\n");
        printf("Toplam= %d\n", toplamC);
        printf("Ortalama= %d\n", toplamC / sayacC);

    }

    printf("****Tek Sayilar***\n");
    printf("Toplam= %d\n", toplamT);
    printf("Ortalama= %d\n", toplamT / sayacT);

    getch();
    return 0;

}
