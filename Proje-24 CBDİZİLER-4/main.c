#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	

	// Matrislerde Toplama
	
	int mris1[2][2]={10,20,30,40};
	int mris2[2][2]={12,24,36,48};
	int toplam[2][2];
	
	int i,j,a,b;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			toplam[i][j]=mris1[i][j]+mris2[i][j];
		}
	}
	
	for(a=0;a<2;a++)
	{
		for(b=0;b<2;b++)
		{
			printf("%d ",toplam[a][b]);
		}
		printf("\n");
	}

*/



	// Proje-1
	// Klavyeden Girilen sayilarin matrislerinin toplamýný bulunuz.
	
	int satir,sutun,i,j,k,l,a,b,c,d,e,f,x,y;
	
	
//**********************************************************
	printf("Birinci Matrisin Satir Sayisini Giriniz: ");
	scanf("%d",&satir);
	
	printf("Sutun Sayisini Giriniz: ");
	scanf("%d",&sutun);
	
	int matris2[satir][sutun];
	int matris1[satir][sutun];
	int toplam[satir][sutun];
	
	
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("Birinci Matrisin [%d][%d] degerlerini giriniz: ",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
		printf("\n");
	}
//**********************************************************
	printf("ikinci Matrisin Satir Sayisini Giriniz: ");
	scanf("%d",&satir);
	
	printf("ikinci Matrisin Sutun Sayisini Giriniz: ");
	scanf("%d",&sutun);
	
	
	for(k=0;k<satir;k++)
	{
		for(l=0;l<sutun;l++)
		{
			printf("ikinci Matrisin [%d][%d] degerlerini giriniz: ",k+1,l+1);
			scanf("%d",&matris2[k][l]);
		}
		printf("\n");
	}
//**********************************************	
	printf("Birinci Matris\n");
	
	for(a=0;a<satir;a++)
	{
		for(b=0;b<sutun;b++)
		{
			printf("%d ",matris1[a][b]);
		}
		printf("\n");
	}
	
	printf("ikinci Matris \n");
	
	for(c=0;c<satir;c++)
	{
		for(d=0;d<sutun;d++)
		{
			printf("%d ",matris2[c][d]);
		}
		printf("\n");
	}
	
	// Toplam Ýcin For Döngüsü
	for(e=0;e<satir;e++)
	{
		for(f=0;f<sutun;f++)
		{
			toplam[e][f]=matris1[e][f]+matris2[e][f];
		}
	}
	
	printf("Matrislerin Toplami: \n");
	for(x=0; x<satir; x++)
	{
		for(y=0; y<sutun; y++)
		{
			printf("%d\n",toplam[x][y]);
		}
	}
	
	
	
	
	
	
	
	return 0;
}
