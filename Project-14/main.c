#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	// SwitchCase Uygulamalarý
	
/*
	int sayi1,sayi2,sonuc;
	char islem;
	sayi1=75;
	sayi2=15;
	printf("islemi girin: ");
	scanf("%s",&islem);
	
	switch(islem){
		case '+':
			sonuc=sayi1+sayi2;
			printf("Sonuc: %d",sonuc);
		break;
		case '-':
			sonuc=sayi1-sayi2;
			printf("Sonuc: %d",sonuc);
		break;
		case '/':
			sonuc=sayi1/sayi2;
			printf("Sonuc: %d",sonuc);
		break;
		case '*':
			sonuc=sayi1*sayi2;
			printf("Sonuc: %d",sonuc);
		break;
		default:
			printf("Yanlis Sembol Girdiniz! ");
		break;
	}
*/


	//	Genel uygulama
	
	int sayi1,sayi2,sonuc,secim,pi;
	pi=2.14;
	printf("Matematik Menusu\n");
	printf("*****************\n\n");
	printf("1-Kare de alan ve cevre hesabi\n");
	printf("2-Girilen Sayinin Kupu\n");
	printf("3-Cemberde alan ve cevre hesabi\n");
	printf("4-5x2+7x+9 x e gore islemin sonucu\n");
	printf("5-Dikdortgende alan ve cevre hesabi\n");
	printf("isleminizi secin: ");
	scanf("%d",&secim);
	
	switch(secim){
		case 1:
			printf("Sayi1 Giriniz: ");
			scanf("%d",&sayi1);
			printf("Karede Alan: %d \n",(sayi1*sayi1));
			printf("Karenin Cevresi: %d \n",(sayi1*4));
		break;
		case 2:
			printf("Sayi1 Giriniz: ");
			scanf("%d",&sayi1);
			printf("Girilen Sayini Kupu: %d \n",(sayi1*sayi1*sayi1));
		break;
		case 3:
			printf("Sayi1 Giriniz: ");
			scanf("%d",&sayi1);
			printf("Cemberde Alan: %d \n",(pi*sayi1*sayi1));
			printf("Cemberin Cevresi: %d \n",(2*pi*sayi1));
		break;
		case 4:
			printf("Sayi1 Giriniz: ");
			scanf("%d",&sayi1);
			printf("islemin sonucu: %d \n",(5*2+(7*sayi1)+9));
		break;
		case 5:
			printf("Sayi1 Giriniz: ");
			scanf("%d",&sayi1);
			printf("Sayi2 Giriniz: ");
			scanf("%d",&sayi2);
			printf("Dikdörtgende alan: %d \n",(sayi1*sayi2));
			printf("Dikdörtgenin Cevresi: %d",(2*(sayi1+sayi2)));
		break;
		
	}



	return 0;
}
