#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	/*
	int a;
	
	printf("Bir sayi giriniz. ");
	scanf("%d",&a);
	
	if(a%2==0){
		printf("Girilen sayi cifttir.");
	}
	else{
		printf("Girilen sayi tektir. ");
	}
	
	*/
	
	/*
	int a;
	printf("Bir sayi giriniz. ");
	scanf("%d",&a);
	
	if(a%4==0 && a%6==0){
		printf("Sayi hem 4,6,24'un katýdýr");
	}
	else{
		printf("Sayi 24'un kati degildir.'");
	}
	*/
	
	/*
	int su;
	printf("sicaklik gir ");
	scanf("%d",&su);
	
	if(su<=0){
		printf("Su buz haldedir. ");
	}
	if(su>0 && su<100){
		printf("Su sivi halde");
	}
	if(su>=100){
		printf("Su buhar halindedir. ");
	}
	*/
	
	int sinav1,sinav2,sinav3,proje,ortalama;
	printf("Sinav1 notunu giriniz: ");
	scanf("%d",&sinav1);
	
	printf("Sinav2 notunu giriniz: ");
	scanf("%d",&sinav2);
	
	printf("Sinav3 Notunu giriniz: ");
	scanf("%d",&sinav3);
	
	printf("Proje Notunu Giriniz: ");
	scanf("%d",&proje);
	
	ortalama=(sinav1+sinav2+sinav3+proje)/4;
	if(ortalama<50){
		printf("Sinav harf karsiligin: ff");
	}
	if(ortalama>=50 && ortalama<60){
		printf("Sinav not karsiliginiz: dd");
	}
	if(ortalama>=60 && ortalama<70){
		printf("Sinav not karsiliginiz: cc");
	}
	if(ortalama>=70 && ortalama>85){
		printf("Sinav not karsiliginiz: bb");
	}
	if(ortalama>=85 && ortalama>100){
		printf("Sinav not karsiliginiz: aa");
	}
	
	
	
	return 0;
}
