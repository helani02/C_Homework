#include <math.h>
#include <stdio.h>

/* Bir diziyi surekli maksimumu bularak 
buyukten kucuge siralayan bir C programidir.
(65,55,34,21,5,5,2,2,-4) bu sekilde olacak.*/

int main() {
 
    int numbers[]={34,2,5,-4,5,2,21,55,65};//siralanacak sayi dizisi
    int a, b, temp;/*a ve b 'temp' degiskeni araciyla 
	buyuk ve kucuk degerleri yerleri degistirmek(siralamak)*/
  
    for(a=0; a<9;a++){
      for(b=0;b<9;b++){
        if(numbers[a]>numbers[b]){
          temp=numbers[a];
          numbers[a]=numbers[b];
          numbers[b]=temp;
        }
      }
    }
    printf("%d",numbers[0]); //dizinin ilk sayiyi yazdirmak
    for(a=1;a<9;a++)
      printf(",%d",numbers[a]); //dizinin diger sayilari yazdirmak 
	//iki tane ayri printf yazma sebebim son sayidan sonra virgulu yazdirmamak icin. 

    return 0;
}
