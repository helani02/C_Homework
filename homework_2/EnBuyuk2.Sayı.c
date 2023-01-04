#include <math.h>
#include <stdio.h>


/*Bir dizideki en buyuk 2. Sayiyi bulmak. */

int main() {
    
    int d[10];
    int i, j, temp;
    
    double ort=0;
    double toplam=0;
    printf("On sayi giriniz:"); //kullanicidan alinan 10 sayi 
    for (i=0;i<10;i++){
       scanf("%d",&d[i]); //alinan sayilari dizi olarak yazdirmak
    }
    for(i=0; i<9;i++){ //sayilari buyukten kucuge kadar siralamak 
      for(j=0;j<9;j++){
        if(d[i]>d[j]){
          temp=d[i];
          d[i]=d[j];
          d[j]=temp;
        }
      }
    }     
    for(i=0;i<10;i++){
      toplam+=d[i];
    }  
	  ort =toplam/10;
	     
        printf("\nEn buyuk ikinci sayi %d",d[1]) ; /*diziyi siralamaktan sonra 2.buyuk sayiyi yazdirmak*/
    	printf("\nelemanlarin ortalamasi %lf",ort);
 return 0;
}
