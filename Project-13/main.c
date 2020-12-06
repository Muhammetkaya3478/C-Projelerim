#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	//SwitchCase
/*
	int sayi;
	printf("Ay Numarasi Giriniz: ");
	scanf("%d",&sayi);
	
	switch(sayi)
	{
		case 1:printf("Ocak"); 
		break;
		case 2:printf("Subat");
		break;
		case 3:printf("Mart");
		break;
		case 4:printf("Nisan");
		break;
		case 5:printf("Mayis");
		break;
		case 6:printf("Haziran");
		break;
		case 7:printf("Temmuz");
		break;
		case 8:printf("Agustos");
		break;
		case 9:printf("Eylul");
		break;
		case 10:printf("Ekim");
		break;
		case 11:printf("Kasim");
		break;
		case 12:printf("Aralik");
		break;
		default: printf("Hatali sayi girdiniz: ");
		break;
	}
*/

/*
		//Harf'e Göre Ders Adý
	char ders;
	printf("Bir harf giriniz: ");
	scanf("%s",&ders);
	
	switch(ders)
	{
		case 'm':printf("Matematik");
		break;
		case 't':printf("Turkce");
		break;
		case 'f':printf("Fizik");
		break;
		default: printf("Girilen Numaraya Ait Bir Ders Bulunamadi. ");
	}
*/
	
	int gunler;

printf("Bir numara giriniz: ");
scanf("%d",&gunler);

switch(gunler)
{
	case 1:printf("Monday: ");
	break;
	case 2:printf("Tuesday: ");
	break;
	case 3:printf("Wednessday: ");
	break;
	case 4:printf("Thursday: ");
	break;
	case 5:printf("Friday:");
	break;
	case 6:printf("Satuday: ");
	break;
	case 7:printf("Sunday: ");
	break;
	default: printf("Yanlis Bir Sayi Girdiniz. Lutfen,tekrar deneyeniz...");
	
}




	return 0;
}
