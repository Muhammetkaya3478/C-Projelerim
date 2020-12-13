#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	// Scanf Fonksiyonu
	char kitapadi[10],yazar[15],sayfasayisi[3],tarih[4],basimevi[10],tur[10];
	
	printf("Kitapadi Giriniz: ");
	scanf("%s",kitapadi);
	
	printf("Yazar Adý Giriniz: ");
	scanf("%s",yazar);
	
	printf("Sayfa Sayisi Giriniz: ");
	scanf("%s",sayfasayisi);
	
	printf("Basým Tarihini Giriniz: ");
	scanf("%s",tarih);
	
	printf("Basým Yerini Giriniz:");
	scanf("%s",basimevi);
	
	printf("Kitabin Turunu Giriniz");
	scanf("%s",tur);
	
	printf("Girilen Kitap Adi: %s",kitapadi);
	printf("Girilen Yazar Adi: %s",yazar);
	printf("Girilen Sayfa Sayýsý %d:",sayfasayisi);
	printf("Girilen Basým Tarihi %d",tarih);
	printf("Girilen Basým Yeri %s",basimevi);
	printf("Girilen Kitabin Turu %s",tur);
	return 0;
	
}
