#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	char sehir[15];
	int i;
	for(i=0; i<3; i++)
	{
		printf("Sehri Girin: ");
		scanf("%s",sehir);
		printf("Girdiginiz il: %s",sehir);
		printf("\n");
	}
	
				//Proje-1
	
	char sehir[3][15];
	int i;
	
	for(i=0;i<3;i++)
	{
		printf("Sehir: ");
		scanf("%s",sehir[i]);
	}
	
	for(i=0;i<3;i++)
	{
		printf("Girdiginiz il: %s\n",sehir[i]);
	}
	*/


/*
int dizi[100];
int i,sayi;

printf("Eleman Sayisi: ");
scanf("%d",&sayi);

for(i=0;i<sayi;i++)
{
	printf("Dizinin %d.degerini girin: ",i+1);
	scanf("%d",&dizi[i]);
}
printf("\n\n");

for(i=0;i<sayi;i++)
{
	printf("%d ",dizi[i]);
}
*/

				// 	Proje-2
				
				
	// Dýþarýdan girilen eleman sayýsý gir ve degerlerini gir. Sonra ortalamasýný bul.
	
int dizi[100];
int i,sayi,ortalama;
int toplam=0;


printf("Eleman Sayisini Gir: ");
scanf("%d",&sayi);

for(i=0;i<sayi;i++){
	printf("Dizinin %d.degerini girin: ",i+1);
	scanf("%d",&dizi[i]);
	toplam=toplam+dizi[i];
	ortalama=toplam/sayi;
}
printf("ort= %d",ortalama);













	
	
	
	
	return 0;
}
