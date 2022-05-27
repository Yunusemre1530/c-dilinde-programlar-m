#include<stdio.h>
#include<conio.h>
int main(){
	char isim[20];
	int vize,final;
	float ort;
	printf("isminizi giriniz\n");
	scanf("%s", &isim);
	printf("vizeyi giriniz");
	scanf("%d", &vize);
	printf("final notunuzu giriniz\n");
	scanf("%d",&final);
	ort= vize*4/10.0+final*6/10.0;
	printf("isminiz: %s\nvize notunuz :%d\nfinalnotunuz: %d\n",isim,vize,final);
	if (ort>90 && ort<100){
	} 
		if (ort>85 && ort<100){
			printf("ortalamaniz: %.1f\n",ort);
		    printf("NOTUNUZ AA");
	} 
		if (ort>70 && ort<84){
			printf("ortalamaniz: %.1f\n",ort);
			 printf("NOTUNUZ BB");
	} 
		if (ort>55 && ort<69){
			printf("ortalamaniz: %.1f\n",ort);
			 printf("NOTUNUZ CC");
			
	} 
		if (ort>45 && ort<54){
			printf("ortalamaniz: %.1f\n",ort);
			 printf("NOTUNUZ DD");
	} 
		if (ort>40 && ort<44){
			printf("ortalamaniz:%.1f\n",ort);
			 printf("NOTUNUZ FD");
	}
		if (ort>0 && ort<39){
			printf("ortalamaniz: %.1f\n",ort);
			 printf("NOTUNUZ FF");
	} 
	
	return 0;
}
