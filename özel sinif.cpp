#include<stdio.h>
int sinif_notlari(int sinif[],int a){
	int vize,final,toplamf=0,toplamv=0;
	float ortf,ortv,ort[10000];
	for(int i=1;i<=a;i++){
		printf("%d. ogrencinin vize final notunu giriniz: ",i); scanf("%d %d",&vize,&final);
		return ort[i-1]=vize*4/10.0+final*6/10.0;
		toplamf+=final; toplamv+=vize;
		if (ort[i-1]>=90 && ort[i-1]<=100){
			printf("%d.ogrencinin ortalamasi: %.1f\n",i,ort[i-1]);
		    printf("NOTU AA\n");
	} 
		if (ort[i-1]>=85 && ort[i-1]<90){
		    printf("%d.ogrencinin ortalamasi: %.1f\n",i,ort[i-1]);
		    printf("NOTUNUZ AB\n");
	} 
		if (ort[i-1]>=70 && ort[i-1]<=84){
			printf("%d.ogrencinin ortalamasi: %.1f\n",i,ort[i-1]);
			 printf("NOTU BB\n");
	} 
		if (ort[i-1]>=55 && ort[i-1]<=69){
			printf("%d.ogrencinin ortalamasi: %.1f\n",i,ort[i-1]);
			 printf("NOTU BC\n");
			
	} 
		if (ort[i-1]>=45 && ort[i-1]<=54){
			printf("%d.ogrencinin ortalamasi: %.1f\n",i,ort[i-1]);	
			 printf("NOTU CC\n");
	} 
		if (ort[i-1]>=40 && ort[i-1]<=44){
			printf("%d.ogrencinin ortalamasi: %.1f\n",i,ort[i-1]);
			 printf("NOTU CD\n");
	}
		if (ort[i-1]>=0 && ort[i-1]<=39){
			printf("%d.ogrencinin ortalamasi: %.1f\n",i,ort[i-1]);
			 printf("NOTU DD\n");
	}
return ort[i-1]; 
}
ortf=toplamf/a;
ortv=toplamv/a;
printf("sinifin final ve vize ortalamasi= %.1f %.1f\n",ortf,ortv);
int enb=0,enk=ort[0],enko=0,enbo=0;
 for(int i=1;i<=a;i++){
   if (ort[i-1]>enb){
       enb=ort[i-1];
       enbo=i;
 } 
   if(ort[i-1]<enk){
   	enk=ort[i-1];
   	enko=i;
   }
}
 printf("siniftaki en yuksek ortalamali ogrenci= %d. ogrenci\n siniftaki en dusuk ortalamali ogrenci = %d. ogrenci\n ",enbo,enko);
 
}
    
int main(){
	int sinif;
    printf("Kac sinif vardir: "); scanf("%d",&sinif);
    int sinifort[sinif];
    for (int i=0;i<sinif;i++){
	int a;
	printf("%d. sinifin mevcudu kactýr: ",i+1); scanf("%d",&a);
	int sinif1[a];
	sinif_notlari (sinif1,a);
	sinifort[i]=sinif_notlari(sinif1,a);
}
}

