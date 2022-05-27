#include<stdio.h>
#define boyut 5
int dizi[boyut];
int front=-1;
int rear=-1;
int kuyruk_bosMu(){

	 if(rear==front+1){
	 	return 0;
	 }
	else{
	 return 1;
   }
}
int kuyruk_doluMu(){
	if(rear==boyut-1){
	 return 1;
}
    else{
	 return 0;
}
}
int kuyruk_cikar(){

	if(rear>=front){
  return dizi[front++];
}
  if(front>rear){
  	rear=-1;
	front=-1;
  }
}
void kuyruk_ekle(int a){
	if(front==-1){
		front=0;
		
	}
	if(kuyruk_doluMu()==0){
		dizi[++rear]=a;
	}

}
void yazdir(){
	int i;
    for(i=front;i<=rear;i++){
    	printf("%d. sayi= %d\n",i+1,dizi[i]);
	}
}
		int main(){
	printf("//////////////////\n/\t\t/\n/\tKuyruk\t/\n/\t\t/\n/\t\t/\n/////////////////\n");
	int sayi;
	while(sayi!=4){
		printf("\n\n");
		if(rear<=boyut){
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
				if(kuyruk_doluMu()==0){
				printf("%d.sira cikti= %d",front,kuyruk_cikar());
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
