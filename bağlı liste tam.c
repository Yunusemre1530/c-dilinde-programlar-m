#include<stdio.h>
#include<stdlib.h>
struct liste {
	int veri;
	struct liste *sonraki;
};

struct liste *ilk=NULL;
struct liste *q=NULL;
 sonaekle(int a){
	struct liste *yeni=(struct liste*)malloc(sizeof(struct liste));
	yeni->veri=a;
	yeni->sonraki=NULL;
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		struct liste *gecici=ilk;
		while(gecici->sonraki!=NULL){
			gecici=gecici->sonraki;
		}
		gecici->sonraki=yeni;
	}
}
 Araya_ekle(int eklenen,int hedef){
	struct liste *arayaEklenecek=(struct liste*)malloc(sizeof(struct liste));
    arayaEklenecek->veri=eklenen;
    q=ilk;
    while(q->sonraki->veri!=hedef){
    	q=q->sonraki;
	}
	struct liste *onune=(struct liste*)malloc(sizeof(struct liste));
	onune=q->sonraki;
	q->sonraki=arayaEklenecek;
	arayaEklenecek->sonraki=onune;
	
}
 basagel(int a){
	struct liste *basagelecek=(struct liste*)malloc(sizeof(struct liste));
	basagelecek->veri=a;
	basagelecek->sonraki=ilk;
	ilk=basagelecek;
}
 listeyi_yazdir(){
	q=ilk;
	while(q!=NULL){
		printf("%d ->",q->veri);
		q=q->sonraki;
	}
	printf("\n");
}
sondancikar(){
	q=ilk;

	while(q->sonraki->sonraki!=NULL){
		q=q->sonraki;
	}
	free(q->sonraki);
	q->sonraki=NULL;
}
 bassil(){
	struct liste *bas=ilk->sonraki;
	free(ilk);
	ilk=bas;
}
aradanSil(int a){
	if(ilk->veri==a){
		bassil();
	}
	else{
		struct liste *gecici;
		q=ilk;
		while(q->sonraki!=NULL){
			if(q->sonraki->veri==a){
				gecici=q;
				gecici=gecici->sonraki;
				break;
			}
			q=q->sonraki;
		}
		q->sonraki=q->sonraki->sonraki;
		free(gecici);
}
}
void listeyisil(){
	q=ilk;
	while(q!=NULL){
		ilk=ilk->sonraki;
		free(q);
		q=ilk;
	}
}
void siraliekle(int a){
	struct liste *yeni=(struct liste*)malloc(sizeof(struct liste));
	yeni->veri=a;
	if(ilk==NULL||ilk->veri>a){
		yeni->sonraki=ilk;
		ilk=yeni;
	}
	else{
	struct liste *gecici=ilk;
	while(gecici!=NULL&&gecici->sonraki->veri<a){
	
			gecici=gecici->sonraki;
	}
	yeni->sonraki=gecici->sonraki;
		gecici->sonraki=yeni;
}
}
int main(){
	int i=1;
	while(i==1){
		int islem;
		int sayi;
		int hedef_sayi;
		int sayac=0;
		printf("1-> Listenin sonuna eleman ekle\n2-> Listeden eleman cikarma\n3->Listenin arasina eleman ekleme\n4->Listenin basina sayi ekleyin\n5->Sondan eleman cikar\n6->Bastan Sil\n7->Aradan sil\n8->Listeyi Sil\n9->Tersten yazdir\n10->sirali ekle-----ISLEM NUMARASI GIRINIZ------\n            |\n            v\n");
		scanf("%d",&islem);
		switch(islem){
			case 1:
					if(ilk==NULL){
					printf("!!!!!!!!!!Kuyruk bostur!!!!!!!!!\n--->Basa eklenecektir\n\n\n");
				}
				printf("eklenecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				sonaekle(sayi);
					listeyi_yazdir();
				break;
			case 2:
				if(ilk==NULL){
					printf("!!!!!!!!!!Kuyruk bostur!!!!!!!!!\n\n\n");
				}
				else {
				printf("cikarilacak sayiyi giriniz: ");
				scanf("%d",&sayi);
				q=ilk;
			    while(q->sonraki!=NULL){
			    	if(q->veri==sayi){
			    		sayac++;
					}
					q=q->sonraki;
				}
				if(sayac>0){
				aradanSil(sayi);
					listeyi_yazdir();				
			}
			else{
				printf("!!!!!Cikarmak istediginiz eleman bulunamadi!!!!!!\n\n\n");				
			}
		}
			break;
			case 3:
				printf("eklenecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				printf("hangi sayinin arkasina eklenecek: ");
				scanf("%d",&hedef_sayi);
				q=ilk;
			    while(q->sonraki!=NULL){
			    	if(q->veri==hedef_sayi){
			    		sayac++;
					}
					q=q->sonraki;
				}
				if(sayac>0){
				Araya_ekle(sayi,hedef_sayi);
					listeyi_yazdir();				
			}
			else{
				printf("!!!!!!!!arkasina eklenecek eleman bulunamadi!!!!!!!!!!\n\n\¨n");				
			}
			break;
			case 4:
					printf("eklenecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				basagel(sayi);
				listeyi_yazdir();
				break;
			case 5:
				if(ilk==NULL){
					printf("!!!!!!!KUYRUK BOSTUR!!!!!!!!!!!!\n\n\n");
				}
				else{
				sondancikar();
				listeyi_yazdir();
			}
				break;
			case 6:
				if(ilk==NULL){
					printf("!!!!!!!KUYRUK BOSTUR!!!!!!!!!!!!\n\n\n");
				}
				else{
				bassil();
				listeyi_yazdir();
			}
			break;
			case 7:
					if(ilk==NULL){
					printf("!!!!!!!KUYRUK BOSTUR!!!!!!!!!!!!\n\n\n");
				}
				else{
				printf("silinecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				aradanSil(sayi);
					q=ilk;
			    while(q->sonraki!=NULL){
			    	if(q->veri==hedef_sayi){
			    		sayac++;
					}
					q=q->sonraki;
				}
				if(sayac>0){
				aradanSil(sayi);
				listeyi_yazdir();
	    		}
		        else{
		        	printf("!!!!!!!!!!!silinecek eleman yoktur!!!!!!!!!!!\n\n\n");
				}
    		}
				break;
			case 8:
				listeyisil();
				listeyi_yazdir();
				break;
		    /*case 9:
			liste2_ekle();
			break;*/
			case 10:
				printf("eklenecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				siraliekle(sayi);
				listeyi_yazdir();
				break;
		}
	}
}
