//
/*soru_10_1
Tuttuğum Sayıyı Tahmin Et” oynatan bir program yazınız. 
fonksiyon kullanmadan, 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
 
int tahmin;//tahmin edeceğiniz sayı,
int sayi;
srand(time(NULL));
sayi = rand()%1000+1;

  printf("Tuttuğum Sayıyı Tahmin Et (1-1000)\n\n");

  while(sayi){

    printf("Lütfen tahmininizi giriniz: ");
    scanf("%d",&tahmin);

    if(sayi < tahmin){
    printf("Çok büyük. Tekrar deneyin.\n");
    }
    else if(sayi > tahmin){
    printf("Çok küçük. Tekrar deneyin.\n");
    }
    else{
    printf("Mükemmel bildiniz !\n");
    printf("Tekrar oynamak ister misiniz?(e ya da h): ");
    break;
    }
  } 
  return 0;
}