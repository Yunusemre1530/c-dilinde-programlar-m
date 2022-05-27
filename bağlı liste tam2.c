#include<stdio.h>
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
	struct liste *arayaeklenecek=(struct liste*)malloc(sizeof(struct liste));
	if(ilk==NULL){
		arayaeklenecek->veri=eklenen;
		arayaeklenecek->sonraki=NULL;
	}
	else{
    arayaeklenecek->veri=eklenen;
    q=ilk;
    while(q->sonraki->veri!=hedef){
    	q=q->sonraki;
	}
	struct liste *onune=(struct liste*)malloc(sizeof(struct liste));
	onune=q->sonraki;
	q->sonraki=arayaeklenecek;
	arayaeklenecek->sonraki=onune;
}
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
int main(){
	int i=1;
	while(i==1){
		int islem;
		int sayi;
		int hedef_sayi;
		printf("-----ISLEM SECINIZ------\n1-> Listenin sonuna eleman ekle\n2-> Listeden eleman cikarma\n3->Listenin arasina eleman ekleme\n4->Listenin basina sayi ekleyin\n5->Sondan eleman cikar\n6->Bastan Sil\n7->Aradan sil\n");
		scanf("%d",&islem);
		switch(islem){
			case 1:
				printf("eklenecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				sonaekle(sayi);
					listeyi_yazdir();
				break;
			case 2:
				printf("cikarilacak sayiyi giriniz: ");
				scanf("%d",&sayi);
				aradanSil(sayi);
					listeyi_yazdir();
				break;
			case 3:
				printf("eklenecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				printf("hangi sayinin arkasina eklenecek: ");
				scanf("%d",&hedef_sayi);
				Araya_ekle(sayi,hedef_sayi);
					listeyi_yazdir();
				break;
			case 4:
					printf("eklenecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				basagel(sayi);
				listeyi_yazdir();
				break;
			case 5:
				sondancikar();
				listeyi_yazdir();
				break;
			case 6:
				bassil();
				listeyi_yazdir();
			case 7:
				printf("silinecek sayiyi giriniz: ");
				scanf("%d",&sayi);
				aradanSil(sayi);
		        listeyi_yazdir();
		}
	}
}
