#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	//String Diziler
	//Char kullanilir.
	
	char str[7];
	// En cok 7 karakter tutar.
	// str dizisi string olarak tutulursa en fazla 7 karakter alabilir.
	// Sonu Null karakter ile biter.
	// String dizi tanimlarken sonuna Null karakter dizisi icinde yer býrak.
	// String bos olursa o zaman ilk eleman Null olur.
	//*************
	

	
	
	//****Gosterim Bicimleri***
	char str1[8]={'x','y','z'};
	char str2[8]={"xyz"}; 	//Ýkiside dogrudur. Aralarinda fark yoktur.
	
	char *str3="abc";	// !!Bu sekilde tanimlanan diziler degistirilemiyorlar.!!
	
	char str4[]="ilk denemem";
	printf("%s \n",str4);
	printf("%40s \n",str4); // saga dayalý yazdirir.
	printf("%-40s \n",str4);	// sola dayali yazdirir.
	
	char str5[]={"ikinci denemem"};
	printf("%.10s \n",str5); // Sadece 10 karakteri yazdirir.
	printf("%40.10s \n",str5);	// 40 Bosluk ayrilir ve 10 karakter yazdirir.(Saga dayali)
	printf("%-40.10s \n",str5);	
	
	char str6[80];
	scanf("%s",str6);// String Okuma 
	// !!! scanf yerine gets(str6); da kullanilabilinir !!!
	
	
  			// Proje-1
	// Karakter Dizisinin Uzunlugu
	char s[40];
	int a=0;
	
	/* Diziyi Oku*/
	printf("Akliniza gelen birseyler yaziniz.");
	scanf("%s",s);
	
	/*Sonlandirici karaktere kadar karakterleri say*/
	while(s[a]!='\0')
	{
		a++;
	}
	printf("Dizinin Uzunlugu: %d\n",a);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
