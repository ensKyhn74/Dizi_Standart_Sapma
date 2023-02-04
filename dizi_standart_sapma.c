#include <stdio.h>
#include <math.h>
/* STANDART SAPMA Nasıl Hesaplanır?
1) Sayıların Aritmetik Ortalaması bulunur
2) Her sayının aritmetik ortalamadan farkı bulunur
3) Bulunan farkların her birinin karesi hesaplanır ve farkların kareleri toplanır
4) Elde edilen toplam serinin eleman sayısının 1 eksiğine bölünür
5) Bulunan sayının karekökü standart sapma değeridir!
*/

// 5 elemanlı dizinin Standart Sapmasını hesaplar 
int main() 

{
 
 int dizi[] = {10,12,15,18,23};
 float farkDizisi[5];
 float toplam = 0.0;
 float AritmetikOrt = 0.0;
 int i;    
 
 for(i = 0 ; i < 5 ; i++)
 {
 AritmetikOrt = AritmetikOrt + dizi[i];
 }
 
 AritmetikOrt = AritmetikOrt / 5;
 
 printf("Aritmetik Ortalama = %.2f\n",AritmetikOrt);
 
 for(i = 0 ; i < 5 ; i++)
 {
  farkDizisi[i] = AritmetikOrt - dizi[i];   
 }
 
  for(i = 0 ; i < 5 ; i++)
  {
   printf("%.2f ",farkDizisi[i]);
  }
  printf("\n");
  
  for(i = 0 ; i < 5 ; i++)
  {
   toplam = toplam + farkDizisi[i]*farkDizisi[i];
  }
  printf("%.2f\n",toplam); // 105.20
  
  float sonuc = toplam / 4;
  
  printf("%.2f\n",sonuc);
   
  float StandartSapma = sqrt(sonuc);
  
  printf("Standart Sapma Sonucu: %.4f\n",StandartSapma);

  return 0;
  
}