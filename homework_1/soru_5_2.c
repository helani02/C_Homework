//
/*soru_5_2
şifrelenmiş numaraları eski haline getiren bir programdır.
*/
#include <stdio.h>

int main(void) {
  
int n1, n2, n3, n4;
int numara;//asıl tel numarası
int t;//basamakları değiştirmek için
int sifreli_numara;//şifrelenmiş numara 

  printf("4 basamaklı bir şifreli numara giriniz: ");
  scanf("%d", &sifreli_numara);

  n1=(sifreli_numara/1000);
  n2=(sifreli_numara%1000/100);
  n3=(sifreli_numara%1000%100/10);
  n4=(sifreli_numara%1000%100%10);

  t = (n1+3)%10;
  n1 = (n3+3)%10;
  n3 = t;
  t = (n2+3)%10;
  n2 = (n4+3)%10;
  n4 = t;

  numara = ((n1*1000)+(n2*100)+(n3*10)+(n4*1));

  printf("Asıl tel numara %d dir.\n",numara);
  
  return 0;
}