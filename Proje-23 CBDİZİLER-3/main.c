#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	
	
	int satir,sutun,i,j,a,b;
	
	printf("Satir Sayisini Giriniz: ");
	scanf("%d",&satir);
	
	printf("Sutun Sayisini Giriniz: ");
	scanf("%d",&sutun);
	
	int matris[satir][sutun];
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("[%d][%d] --> ",i+1,j+1); // Anlasýlýr olmasý icin diziyi 0'dan degil 1'den baslattýk.
			scanf("%d",&matris[i][j]);
		}
		printf("\n");
	}
	
	// Sonuc Ekrani...
	printf("\n\n Olusan Degerler: \n");
	
	for(a=0;a<satir;a++)
	{
		for(b=0;b<sutun;b++)
		{
			printf(" %d ",matris[a][b]);
			
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	return 0;
}
