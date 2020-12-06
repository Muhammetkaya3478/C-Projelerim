#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	// Deðiþken Türü,Deðiþken Adý,Veri
	
	
	char ad[20]="Avcunuzda ki Kelebek";
	char yazar[30]="Ahmet Serif Izgoren";
	char Turu[7]="Hikaye";
	char Sayfa[3]="124";
	char yil[4]="2020";
	
	printf("********* Kitap Tanitim **********\n\n\n");
	printf("Kitapad: %s - Kitapyazar: %s\n",ad,yazar);
	printf("Turu: %s\n",Turu);
	printf("Sayfa Sayisi: %s\n",Sayfa);
	printf("Basim yili: %s\n",yil);
	
	
	
	return 0;
}
