#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Scanf Fonksiyonu
	char kitapadi[10],yazar[15],sayfasayisi[3],tarih[4],basimevi[10],tur[10];
	
	printf("Kitapadi Giriniz: ");
	scanf("%s",kitapadi);
	
	printf("Yazar Ad� Giriniz: ");
	scanf("%s",yazar);
	
	printf("Sayfa Sayisi Giriniz: ");
	scanf("%s",sayfasayisi);
	
	printf("Bas�m Tarihini Giriniz: ");
	scanf("%s",tarih);
	
	printf("Bas�m Yerini Giriniz:");
	scanf("%s",basimevi);
	
	printf("Kitabin Turunu Giriniz");
	scanf("%s",tur);
	
	printf("Girilen Kitap Adi: %s",kitapadi);
	printf("Girilen Yazar Adi: %s",yazar);
	printf("Girilen Sayfa Say�s� %d:",sayfasayisi);
	printf("Girilen Bas�m Tarihi %d",tarih);
	printf("Girilen Bas�m Yeri %s",basimevi);
	printf("Girilen Kitabin Turu %s",tur);
	return 0;
	
}
