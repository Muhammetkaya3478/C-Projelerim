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

for(i=1;i<10;i++) // Bo�luk
{
	printf(" ");
}
for(i=1;i<=1;i++) // 1 Y�ld�z
{
	printf("*");
}

printf("\n");

for(i=1;i<9;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=2;i++)	// 2 Y�ld�z
{
	printf("* ");
}

printf("\n");

for(i=1;i<8;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=3;i++)	// 3 Y�ld�z
{
	printf("* ");
}
	printf("\n");
	
for(i=1;i<7;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=4;i++)	// 4 Y�ld�z
{
	printf("* ");
}

printf("\n");

for(i=1;i<6;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=5;i++)	// 5 Y�ld�z
{
	printf("* ");
}

printf("\n");

for(i=1;i<5;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=6;i++)	// 6 Y�ld�z
{
	printf("* ");
}

printf("\n");

for(i=1;i<4;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=7;i++)	// 7 Y�ld�z
{
	printf("* ");
}

printf("\n");

for(i=1;i<3;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=8;i++)	// 8 Y�ld�z
{
	printf("* ");
}


printf("\n");

for(i=1;i<2;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=9;i++)	// 9 Y�ld�z
{
	printf("* ");
}

printf("\n");

for(i=1;i<1;i++)	// Bo�luk
{
	printf(" ");
}
for(i=1;i<=10;i++)	// 10 Y�ld�z
{
	printf("* ");
}



// Proje-4 K�sa Yol(Eskenar Ucgne)

int i,j,kenar;

printf("Kenar Sayisini Giriniz: ");
scanf("%d",&kenar);

for(i=1;i<=kenar;i++)
{
	for(j=1;j<=kenar-(i-1);j++) // Kenar Say�s� Kadar Bo�luk
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
