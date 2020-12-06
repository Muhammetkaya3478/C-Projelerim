#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
 char Kitapad[15];
 char Yazar[20];
 char Sayfa_sayisi[3];
 char Basim_tarihi[4];
 char Basim_evi[10];
 char Tur[7];
 
 printf("Kitap Adi Giriniz; ");
 scanf("%s",Kitapad);
 
 printf("Yazar Adi Giriniz; ");
 scanf("%s",Yazar);
 
 printf("Sayfa sayisi Giriniz; ");
 scanf("%s",Sayfa_sayisi);
 
 printf("Basim Evi Giriniz; ");
 scanf("%s",Basim_evi);
 
 printf("Basim Tarihi Giriniz; ");
 scanf("%s",Basim_tarihi);
 
 printf("Kitap Turunu Giriniz; ");
 scanf("%s",Tur);
 
 printf("Kitap Adi; %s\n",Kitapad);
 printf("Yazari; %s\n",Yazar);
 printf("Sayfa sayisi %s\n",Sayfa_sayisi);
 printf("Basim Evi;  %s Tarihi; %s\n ",Basim_evi,Basim_tarihi);
 printf("Kitap Turu; %s",Tur);
 
 return 0;
}
