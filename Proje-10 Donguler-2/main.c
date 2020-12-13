#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*****
	// Sayac kavramý
	
	int sayac=0;
	int i;
	for(i=1; i<=10; i++){
		sayac+=i;
	}
	printf("Sayac= %d",sayac);
	
	******/
	
	/*******
	// Faktöriyel
	
	int i;
	int faktor=1;
	for(i=1; i<=5; i++)
	{
		faktor=faktor*i;
	}
	printf("5 saysinin faktoriyeli: %d",faktor);
	
	*******/
	
	/*********
	int i,sayi;
	int faktor=1;
	printf("Bir sayi giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1; i<=sayi; i++)
	{
		faktor=faktor*i;
	}
	printf("Sonucunuz: %d",faktor);
	*********/
	
	
	/***********
	
	// FÝBONACCÝ 
	
	int sayi1,sayi2,sayi3,i;
	sayi1=1;
	sayi2=1;
	
	printf("%d\n",sayi1);
	printf("%d\n",sayi2);
	
	for(i=1; i<=1000; i++){
			
			sayi3=sayi1+sayi2;
			sayi1=sayi2;
			sayi2=sayi3;
			printf("%d\n ",sayi3);
			
	}
	***********/
	
	/***************
	int a,b,c,d,i;
	a=1;
	b=1;
	c=1;
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	for(i=1; i<100; i++)
	{
		d=a+b+c;
		a=b;
		b=c;
		c=d;
		printf("%d\n",d);
	}
	***************/
	
	// 1+5+9+13+.......41
	
	int i;
	int toplam;
	toplam=0;
	for(i=1; i<=41; i+=4)
	{
		toplam=toplam+i;
	}
	printf("Sonuc: %d",toplam);
	
	

	
	
	
	return 0;
}
