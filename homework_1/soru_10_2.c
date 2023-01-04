//
/*soru_10_2
Tuttuğum Sayıyı Tahmin Et” oynatan bir program yazınız. 
FONKSİYON KULLANARAK,
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int rasgeleSayi(){
  srand(time(NULL));
  int sayi = rand()%1000+1;
  int tahmin;
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
return sayi;
}

int main(void) {

  rasgeleSayi();

  return 0;
}