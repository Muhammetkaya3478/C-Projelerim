#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {


	int i,j,k,l;
	
	for(k=1;k<=5;k++)
	{
		for(l=1;l<=k;l++)
		{
			printf("*");
		}
		printf("\n");
	}
	
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	
	// �dev Projesi
int i,j;

	for(i=1 ; i<=5 ; i++){     //Kelebe�in �st yar�s�:
	
		for(j=1 ; j<=i ; j++){     //1 tane y�ld�z (i kadar y�ld�z)
			printf("*");
		}
		for(j=1 ; j<=5-i ; j++){     //4 bo�luk  (5-i kadar bo�luk)
			printf(" ");
		}
		for(j=1 ; j<=5-i ; j++){     //4 bo�luk  (5-i kadar bo�luk)
			printf(" ");
		}
		for(j=1 ; j<=i ; j++){      //1 y�ld�z (i kadar y�ld�z)
			printf("*");
		}
		printf("\n");    //Sonra alt sat�ra ge�.	
	
	}
	
	for(i=5 ; i>=1 ; i--){     //Kelebe�in alt yar�s�:
		
		for(j=1 ; j<=i ; j++){
			printf("*");	
		}
		for(j=1 ; j<=5-i ; j++){
			printf(" ");
		}
		for(j=1 ; j<=5-i ; j++){
			printf(" ");
		}
		for(j=1 ; j<=i ; j++){
			printf("*");	
		}
		printf("\n");
	}
	
	
	
	
	
	
	return 0;
}
