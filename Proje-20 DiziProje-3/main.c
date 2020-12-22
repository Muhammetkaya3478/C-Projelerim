#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
// Proje-1

	int en,boy,i,j;
	printf("En Degeri: ");
	scanf("%d",&en);
	printf("Boy Degeri: ");
	scanf("%d",&boy);
	
	for(i=1;i<=boy;i++)
	{
		for(j=1;j<=en;j++)
		{
			printf("*");	
		}	
		printf("\n");
	}


// Proje-2

int i,j,taban;
printf("Taban Degerini Girin: ");
scanf("%d",&taban);

for(i=1;i<=taban;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}



// Proje-3


int i,j,taban,k,l;
printf("Taban Degerini Girin: ");
scanf("%d",&taban);

for(i=1;i<=taban;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("*");
	}
	printf("\n");
}

for(k=1;k<=taban;k++)
{
	for(l=taban;l>=k;l--)
	{
		printf("*");
	}
	printf("\n");
}


//Proje-4



int i,j;

for(i=1;i<10;i++) // Boþluk
{
	printf(" ");
}
for(i=1;i<=1;i++) // 1 Yýldýz
{
	printf("*");
}

printf("\n");

for(i=1;i<9;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=2;i++)	// 2 Yýldýz
{
	printf("* ");
}

printf("\n");

for(i=1;i<8;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=3;i++)	// 3 Yýldýz
{
	printf("* ");
}
	printf("\n");
	
for(i=1;i<7;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=4;i++)	// 4 Yýldýz
{
	printf("* ");
}

printf("\n");

for(i=1;i<6;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=5;i++)	// 5 Yýldýz
{
	printf("* ");
}

printf("\n");

for(i=1;i<5;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=6;i++)	// 6 Yýldýz
{
	printf("* ");
}

printf("\n");

for(i=1;i<4;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=7;i++)	// 7 Yýldýz
{
	printf("* ");
}

printf("\n");

for(i=1;i<3;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=8;i++)	// 8 Yýldýz
{
	printf("* ");
}


printf("\n");

for(i=1;i<2;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=9;i++)	// 9 Yýldýz
{
	printf("* ");
}

printf("\n");

for(i=1;i<1;i++)	// Boþluk
{
	printf(" ");
}
for(i=1;i<=10;i++)	// 10 Yýldýz
{
	printf("* ");
}



// Proje-4 Kýsa Yol(Eskenar Ucgne)

int i,j,kenar;

printf("Kenar Sayisini Giriniz: ");
scanf("%d",&kenar);

for(i=1;i<=kenar;i++)
{
	for(j=1;j<=kenar-(i-1);j++) // Kenar Sayýsý Kadar Boþluk
	{
		printf(" ");	
	}
	for(j=1;j<=i;j++)
	{
		printf(" *");	
	}	
	printf("\n");
}


	
	return 0;
}
