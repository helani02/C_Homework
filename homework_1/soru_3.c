//
/*soru_3
İki tamsayı alan ve birinci tamsayının ikinci tamsayının tam katı olup olmadığını hesaplayan ve
sonucu ekranda gösteren bir programdır.
*/
#include <stdio.h>

int main(void) {
  int sayi1, sayi2;
   
    printf( "birinci tamsayı giriniz: " );
    scanf("%d", &sayi1);
    printf( "ikinci tamsayı giriniz: " );
    scanf("%d", &sayi2);

    if(sayi1 % sayi2 == 0){
      printf("%d %d'nin tam katidir.",sayi1,sayi2);
    }
    else 
      printf( "%d %d'nin tam kati degildir.\n", sayi1, sayi2 );
  return 0;
}