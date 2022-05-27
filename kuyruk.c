#include<stdio.h>
#define boyut 5
int front=0;
int tepe=-1;
int dizi[boyut];
void kuyruk_ekle(int a){
	if(tepe<boyut){
		tepe++;
		dizi[tepe]=a;
	}
	
}
int kuyruk_cikar(){
	int cikan=dizi[front];
	int i;
	for(i=0;i<=tepe-1;i++){
		dizi[i]=dizi[i+1];
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
		printf("%d.sayi= %d\n",i+1,dizi[i]);
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
	    printf("Kuyruk dolmustur asagidaki islemleri seciniz\n2-pop (cikarma)\n3-KUYRUK yazdir\n4-CIK\nisleminizi giriniz: ");
		}
		int sayi;
		scanf("%d",&sayi);
		if(sayi>4){
			printf("Gecersiz islem");
		}
		int gir_sayi;
		switch(sayi){
			case 1:
				if(kuyruk_doluMu()==0){
				printf("Sayi giriniz: "); scanf("%d",&gir_sayi);
				kuyruk_ekle(gir_sayi);
			}
			else{
				printf("-----kuyruk DOLU------");
			}
				break;
			case 2:
				if(kuyruk_bosMu()==0){
				printf("1.sira cikti= %d",kuyruk_cikar());
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

