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
	
	// Ödev Projesi
int i,j;

	for(i=1 ; i<=5 ; i++){     //Kelebeðin üst yarýsý:
	
		for(j=1 ; j<=i ; j++){     //1 tane yýldýz (i kadar yýldýz)
			printf("*");
		}
		for(j=1 ; j<=5-i ; j++){     //4 boþluk  (5-i kadar boþluk)
			printf(" ");
		}
		for(j=1 ; j<=5-i ; j++){     //4 boþluk  (5-i kadar boþluk)
			printf(" ");
		}
		for(j=1 ; j<=i ; j++){      //1 yýldýz (i kadar yýldýz)
			printf("*");
		}
		printf("\n");    //Sonra alt satýra geç.	
	
	}
	
	for(i=5 ; i>=1 ; i--){     //Kelebeðin alt yarýsý:
		
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
