/*
100 ILE 400 ARASINDAKI SAYILARDAN TUM RAKAMLARI CIFT OLANLARI VE BUNLARIN 
SAYISINI BULAN BIR PROGRAMDIR. 
*/

#include <stdio.h>


int main() {
int i;
int x, y, z;
int sayac=0;

    
    for(i=200;i<=400;i++)
    {
      x = i/100;
      y = (i/10)%10;
      z = i%10;
      
      if(x%2==0 && y%2==0 && z%2==0){ //Tum rakamlari cift olanlari bulmasi icin bu sartlara saglanmali
          
        printf("%d\n",i);
       	sayac++;  // cift sayilarin kac tane oldugunu hesaplar.
      } 
       
    }
    printf("Tum basamaklari cift %d sayi vardir",sayac);
     
    
    
    
    return 0;
}
