#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

/*
// 1-50 arasýnda 5 ile bölünen tam sayýlar.
	int i;
	for(i=1; i<50; i++){
		if(i%5==0){
		printf("5'e Tam Bolunen Sayilar: %d \n",i);
	}
	}
*/

//*************************************//

/*
//	3 Basamaklý Sayýyý basamaklarýna ayýran programý c dilinde yazma
	int sayi,yuzlerb,birlerb,onlar;
	printf("Bir uc basamakli sayi giriniz: ");
	scanf("%d",&sayi);
	
	yuzlerb=sayi/100;
	printf("Yuzlerb %d \n",yuzlerb);
	
	sayi=sayi-(yuzlerb*100);
	onlar=sayi/10;
	printf("onlar %d \n",onlar);
	
	if(sayi%10==0){
	birlerb=0;
	printf("birlerb %d",birlerb);
	}
	else{
		birlerb=sayi%10;
		printf("birlerb %d \n",birlerb);
	}
	
// Diðer Yöntem

	int sayi,yuzler,onlar,birler;
	printf("3 Basamakli Bir Sayi Giriniz: ");
	scanf("%d",&sayi);
	
	yuzler=sayi/100;
	sayi=sayi-(yuzler*100);
	onlar=sayi/10;
	sayi=sayi-(onlar*10);
	birler=sayi;
	printf("Yuzler Basamagi: %d \n",yuzler);
	printf("Onlar Basamagi: %d \n",onlar);
	printf("Birler Basamagi: %d \n",birler);
*/
//******************************************//


	return 0;
}
