#include<stdio.h>
#define boyut 7
int dizi[boyut];
int tepe=-1;
void push(int a){
		tepe++;
		dizi[tepe]=a;
	
}
int pop(){
	if(tepe>-1){
	return dizi[tepe--];
}
}
void yazdir(){
	int i;
	for(i=0;i<=tepe;i++){
		printf("\n\n%d.sayi= %d\n",i+1,dizi[i]);
	}
}
int bosMu(){
	if(tepe==-1){
		return 1;
	}
	else {
	return 0;
   }
	
}
int doluMu(){
	if(tepe==boyut-1){ 
	 return 1;
	}
	else{
		return 0;
	}
	
}
int main(){
	printf("//////////////////\n/\t\t/\n/\tYIGIT\t/\n/\t\t/\n/\t\t/\n/////////////////\n");
	int sayi;
	while(sayi!=4){
		printf("\n\n");
		if(tepe<boyut-1){
		printf("1-push (ekleme)\n2-pop (cikarma)\n3-YIGITI yazdir\n4-CIK\nisleminizi giriniz: ");
	   }
	    else{
	    printf("YIGIT dolmustur asagidaki islemleri seciniz\n2-pop (cikarma)\n3-YIGITI yazdir\n4-CIK\nisleminizi giriniz: ");
		}
		int sayi;
		scanf("%d",&sayi);
		if(sayi>4){
			printf("Gecersiz islem");
		}
		int gir_sayi;
		switch(sayi){
			case 1:
				if(doluMu()==0){
				printf("Sayi giriniz: "); scanf("%d",&gir_sayi);
				push(gir_sayi);
			}
			else{
				printf("-----YIGIT DOLU------");
			}
				break;
			case 2:
				if(bosMu()==0){
				printf("popped= %d",pop());
			}
				else{
					printf("YIGIT BOS");
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
