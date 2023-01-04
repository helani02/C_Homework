
#include <stdio.h>
/*deseni, sekiz printf ifadesiyle ekrana yazdıran bir program yazın. Daha sonra,
kullanabileceğiniz en az printf ifadesiyle yazdırın.
FOR DÖNGÜSÜ KULLANARAK.
*/
int main(void) {

  int i,j,n;

  for(i=1;i<=8;i++){
    for(j=1;j<=8;j++){
      if(i%2 == 1)
        printf("*");
      else
      printf("\t*  ");
    }
    printf("\n");
  }
  
  return 0;
}