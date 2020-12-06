#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*
	int sayi;
	printf("Bir Sayý Giriniz: ");
	scanf("%d",&sayi);
	printf("Girmiþ Olduðunuz sayi: %d",sayi);
	*/

	/*
	int a,b,toplam;
	printf("Bir sayiyi giriniz: ");
	scanf("%d",&a);
	
	printf("Ýkinci sayiyi giriniz: ");
	scanf("%d",&b);
	
	toplam=a+b;
	printf("Toplam: %d",toplam);

	return 0;
	
	*/
	
	/* alan cevre bulma 
	
	int kenar1,kenar2,alan,cevre;
	printf("Lutfen kisa kenari giriniz:  ");
	scanf("%d",&kenar1);
	
	printf("Lutfen Uzun kenari giriniz:  ");
	scanf("%d",&kenar2);
	
	alan=kenar1*kenar2;
	cevre=(kenar1+kenar2)*2;
	
	printf("Alan: %d \n",alan);
	printf("Cevre: %d",cevre);
	
	*/
	
	/* Ortalama Bulma */
	
	/*
	int a,b,ort;
	printf("Vize Notunu Gir: ");
	scanf("%d",&a);
	
	printf("Final Notunu Gir: ");
	scanf("%d",&b);
	
	ort=(a+b)/2;
	
	printf("YilSonu Ortalaman: %d",ort);
	
	*/
	// ÖDEV 
	
	
	int misiradet,kolaadet,suadet,biletadet,misir,kola,su,bilet,toplam;
	misir=2;
	kola=2;
	su=1;
	bilet=8;
	
	
	printf("Alilan Misir adeti: ");
	scanf("%d",&misiradet);
	
	printf("Alinan Kola Adeti: ");
	scanf("%d",&kolaadet);
	
	printf("Alinan Su adeti: ");
	scanf("%d",&suadet);
	
	printf("Alinan Bilet Adeti: ");
	scanf("%d",&biletadet);
	
	toplam=(misir*misiradet)+(kola*kolaadet)+(suadet*su)+(biletadet*bilet);
	
	printf("Toplam Maliyet: %d",toplam);
	
	
	
	
	
	
	
}
