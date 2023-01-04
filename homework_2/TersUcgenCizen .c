#include <math.h>
#include <stdio.h>


//kullanicidan bir sayi alip ters ucgen cizen programdir.
int main() {
    
   
   
   int sayi; //kullanicidan aldigi sayi 
   int a, b, c;
   printf("lutfen bir sayi giriniz:");
   scanf("%d",&sayi); //sayiyi yazdirmak

  for(a=sayi;a>0;a--)// sayilari buyukten kucuge azaltarak ve alt alta yazdirmak
  {
    for(b=1;b<a;b++) // soldaki bosluklari yazdirmak
    printf(" ");
    for(c=a;c<=sayi;c++) // bosluklardan sonra sayilari yazdirmak
    printf("%d",c);

  printf("\n");
  }
    return 0;
}
