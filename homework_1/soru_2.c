//
/*soru_2
0’dan 10’a kadar olan sayıların karelerini ve küplerini hesaplayıp, sonuçları ekrana aşağıda
göründüğü biçimde yazdıran bir programdır.
*/
#include <stdio.h>

int main(void) {

  int n;
  
  printf("Sayi\tKaresi\tKupu\n");

  for(n=0; n<=10; n++){
    printf("%d\t\t%d\t\t%d\n",n,(n*n),(n*n*n));
  }
  return 0;
}