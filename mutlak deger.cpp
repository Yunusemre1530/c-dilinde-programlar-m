#include<stdio.h>
#include<conio.h>
int main(){
	int sayi;
	printf("Bir sayi giriniz ");
	scanf("%d",&sayi);
	if(sayi>0){
	printf("girdiginiz sayi pozitiftir ve %d'dir",sayi);
    }
    if(sayi==0){
    printf("sayi 0 dýr negatif pozitiflikten soz edilemez");
	}
	if(sayi<0) {
		printf("sayi negatiftir mutlak degeri= %d'dir",(-sayi));
	}
	getch();
	return 0;
}
