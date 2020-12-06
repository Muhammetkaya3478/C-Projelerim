#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*
	// While Döngüsü
	int i;
	i=1;
	while(i<=5){
		printf("Merhabalar...\n");
		i++;
	}
	
	*/
	
	/*
	// 1'den 10'a kadar listeleyen program
	
	int i;
	i=1;
	while(i<=10){
		printf("%d \n",i);
		i++;
	}
	*/
	
	/*
	//1 ile 20 arasýndaki çift sayýlarý listele ama 14 sayýsýný listeleme.
	
	int i;
	i=0;
	while(i<=12){
		printf("%d \n",i);
		i=i+2;
	}
	i=16;
	while(i<20){
		printf("%d \n",i);
		i=i+2;
	}
	*/
	
	
	// Girilen sayýnýn faktöriyelini while ile bulan kod
	
	int sayi,faktoryel;
	faktoryel=1;
	sayi=5;
	
	while(sayi>1){
		faktoryel=faktoryel*sayi;
		sayi--;
	}	
	printf("sonuc: %d",faktoryel);
	
	
	
	
	
	
	return 0;
}
