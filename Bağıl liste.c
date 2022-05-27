#include<stdio.h>
struct Node{
	int veri;
	struct Node *link;
};
struct Node *ilk=NULL;
sonaekle(int a){
	struct Node *yeni=(struct Node*)malloc(sizeof(struct Node));
		yeni->veri=a;
		yeni->link=NULL;
	if(ilk==NULL){
		ilk=yeni;
	}
	else{
		struct Node *gecici=ilk;
		while(gecici->link!=NULL){
			gecici=gecici->link;
		}
		gecici->link=yeni;
	}
}
int main(){
	struct Node *yol1=(struct Node*)malloc(sizeof(struct Node));
	yol1->veri=1;
	ilk=yol1;
	struct Node *yol2=(struct Node*)malloc(sizeof(struct Node));
	yol2->veri=2;
	struct Node *yol3=(struct Node*)malloc(sizeof(struct Node));	
	yol3->veri=3;
	struct Node *yol4=(struct Node*)malloc(sizeof(struct Node));
    yol4->veri=4;
    yol2->link=NULL;
    yol1->link=yol4;
    yol4->link=yol3;
    yol3->link=yol2;
    struct Node *gecici=yol1;
    while(gecici!=NULL){
    	printf("%d ",gecici->veri);
    	gecici=gecici->link;
	}
	printf("\n\n");
	sonaekle(10);
	gecici=yol1;
	while(gecici!=NULL){
		
    	printf("%d ",gecici->veri);
    	gecici=gecici->link;
	}
}
