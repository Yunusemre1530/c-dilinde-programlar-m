#include<stdio.h>
#define boyut 5
int front=0;
int tepe=-1;
char kisi[30];
void kuyruk_ekle(char a[]){
	if(tepe<boyut){
		tepe++;
		kisi[tepe]=a;
	}
	
}
int kuyruk_cikar(){
	char cikan=kisi[front];
	int i;
	for(i=0;i<=tepe-1;i++){
		kisi[i]=kisi[i+1];
	}
	tepe--;
	return cikan;
	
}
int kuyruk_doluMu(){
	if(tepe<boyut){
		return 0;
	}
	else{
		return 1;
	}
}
int kuyruk_bosMu(){
	if(tepe==boyut-1){
		return 1;
	}
	else{
		return 0;
	}
}
void yazdir(){
	int i;
	for(i=0;i<=tepe;i++){
		printf("%d.kisi= %s\n",i+1,kisi[i]);
	}
}
	int main(){
	printf("//////////////////\n/\t\t/\n/\tKuyruk\t/\n/\t\t/\n/\t\t/\n/////////////////\n");
	int sayi;
	while(sayi!=4){
		printf("\n\n");
		if(tepe<boyut){
		printf("1-push (ekleme)\n2-pop (cikarma)\n3-KUYRUK yazdir\n4-CIK\nisleminizi giriniz: ");
	   }
	    else{
	    printf("Kuyruk dolmustur asagidaki islemleri seciniz\n2-pop (cikarma)\n3-KUYRUGU yazdir\n4-CIK\nisleminizi giriniz: ");
		}
		int sayi;
		scanf("%d",&sayi);
		if(sayi>4){
			printf("Gecersiz islem");
		}
		char kelime[30];
		switch(sayi){
			case 1:
				if(kuyruk_doluMu()==0){
				printf("müsteri adi giriniz: "); 
				scanf("%s",&kelime);
				kuyruk_ekle(kelime);
			}
			else{
				printf("-----kuyruk DOLU------");
			}
				break;
			case 2:
				if(kuyruk_bosMu()==0){
				printf("1.sira cikti= %s",kuyruk_cikar());
			}
				else{
					printf("Kuyruk BOS");
				}
				break;
			case 3:
				yazdir();
				break;
			case 4: 
			  printf("islem sonlandi...");
			 return 0;
	           		  
			}
	}
	
}

