#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	/*
	int sayi=30;
	
	if(sayi==20){
		printf("Sayi eþittir=20");
	}
	else{
		printf("Sayi !=20");
	}
	*/
	
	/*
	int a=20,b=32,toplam;
	toplam=a+b;
	if(toplam>=50){
		printf("Toplam 50'den büyüktür.'");
	}
	else{
		printf("Toplam 50'den küçüktür.'");
	}
	*/
	
	int vize,final,sonuc;
	
	printf("Vize notunu gir: ");
	scanf("%d",&vize);
	
	printf("Final notunu gir: ");
	scanf("%d",&final);
	
	sonuc=vize*0.4+final*0.6;
	if(sonuc>=50){
		printf("Tebrikler Gectiniz");
	}
	else{
		printf("Uzgunum kaldiniz. ");
	}
	
	
	




	return 0;
}
