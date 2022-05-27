#include<stdio.h>
#include<conio.h>
int main (){
	int i;
	int toplam=0;
	for(i=100;i>50;i--){
		if(i%3==0){
		
		toplam=toplam+i;
		printf("%d\n",i);
	}
	else {
}

} 
	printf("100 ile 50 arasýnda 3 e bölünen sayýlar toplamý %d",toplam);
	return 0;
}
