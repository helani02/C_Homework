#include <math.h>
#include <stdio.h>


//Bir dizinin toplamini recursive bulan bir fonksiyondur.


int topla(int k[],int i)
{
  if(i<=0)
    return 0;

  return(topla(k,i-1)+k[i-1]);
}

int main() 
{
    
    int k[]={34,45,6,4,3,45,234,23,9,26,77,93,-6,-34};
    
    int i =sizeof(k)/sizeof(k[0]);
    printf("%d",topla(k,i));

    
    return 0;
}
