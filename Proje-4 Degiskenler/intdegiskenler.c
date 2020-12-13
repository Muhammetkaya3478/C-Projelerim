#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	/* Ýki Sayýnýn Toplamý 
	int a,b,toplam;
	a=40;
	b=60;
	toplam=a+b;
	printf("Toplam Sonuc: %d",toplam);
	*/
	
	/* Alan ve cevre Sorusu 
	int kisak,uzunk,alan,cevre;
	kisak=30;
	uzunk=25;
	alan=kisak*uzunk;
	cevre=(kisak+uzunk)*2;
	printf("Alan %d \n",alan);
	printf("Cevre %d",cevre);
	*/
	
	// Ödev //
	
	int bagaj,el,kg,odeme,bagajmax,elmax;
	bagaj=20;
	el=12;
	kg=8;
	bagajmax=15;
	elmax=8;
	odeme=(bagaj-bagajmax)*kg+(el-elmax)*kg;
	printf("Ödenmesi Gereken Tutar: %d",odeme);
	
	
	
	
	
	
	
	
	return 0;
}
