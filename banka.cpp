#include<stdio.h>
#include<conio.h>
int main(){
int tutar;
int bakiye=6000;
int islem;
printf("1.PARA CEKME\n:2.PARA YATIRMA\n:3.HAVALE YAPMA\n:4.BAKİYE SORGULAMA\n:");
printf("İSLEMİ SECİNİZ\n");
scanf("%d",&islem);
switch (islem){
	case 1:
		printf("bakiyeniz= %d\n",bakiye);
		printf("Cekeceginiz tutari giriniz");
		scanf("%d",&tutar);
	  
		if (tutar>bakiye){
		printf("isleminiz gerceklestirilemedi");
		}
		else{	
		bakiye-=tutar;
		printf("bakiyeniz:%d",bakiye);
		}
		break;
		case 2:
			printf("bakiyeniz= %d\n",bakiye);
		printf("Yatiracaginiz tutari giriniz");
		scanf("%d",&tutar);
		bakiye+=tutar;
		printf("bakiyeniz:%d",bakiye);
		break;
		case 3:
			printf("bakiyeniz= %d\n",bakiye);
		printf("Havale yapacaginiz tutari giriniz");
		scanf("%d",&tutar);
	
		 if (tutar>bakiye){
		 	
		 	
		 	
		printf("isleminiz gerceklestirilemedi");
		}
		else{
				bakiye-=tutar;
		printf("bakiyeniz:%d",bakiye);
		}
		break;
		case 4:
		printf("bakiyeniz:%d\n",bakiye);
		break;
		default:
	 	printf("tanımlı olmayan islem");
		}
getch();
return 0;
 
}


