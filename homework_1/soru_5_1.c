//
/*soru_5_1
Bir şirket bazı verilerini telefon aracılığıyla başka bir yere iletmek istemektedir. Ama
telefonlarının dinlendiğinden kuşkulanmaktadır. Bütün veriler dört basamaklı tam sayılar
şeklinde iletilecektir. Size verilen görev ise bu verileri daha güvenli bir şekilde iletmeleri için
şifrelemenizdir. Programını şifrelemeyi şu şekilde yapmalıdır. Her basamağı 7 ile toplamının
10’luk sistemdeki eşitiyle değiştirmeli ve birinci basamağı üçüncü basamak, ikinci basamağı da
dördüncü basamak ile yer değiştirmelisiniz. ŞİFRELENMİŞ SAYILARI ALAN bir program yazınız.
*/
#include <stdio.h>

int main(void) {
  
int n1, n2, n3, n4;
int numara;//asıl tel numarası
int t;//basamakları değiştirmek için
int sifreli_numara;//şifrelenmiş numara 

  printf("4 basamaklı bir numara giriniz: ");
  scanf("%d", &numara);

  n1=(numara/1000+7)%10;
  n2=(numara%1000/100+7)%10;
  n3=(numara%1000%100/10+7)%10;
  n4=(numara%1000%100%10+7)%10;

  t = n1;
  n1 = (n3*1000);
  n3 = (t*10);
  t = n2;
  n2 = (n4*100);
  n4 = t*1;

  sifreli_numara = (n1+n2+n3+n4);

  printf("şifrelenmiş numara %d dir.\n",sifreli_numara);
  
  return 0;
}