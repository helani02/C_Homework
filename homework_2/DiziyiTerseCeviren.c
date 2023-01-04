#include <math.h>
#include <stdio.h>


//bir diziyi terse ceviren bir recursive fonksiyonu yazan bir programdir.


void terstenYaz(char *ters)
{
  if(*ters=='\0')
  return ;
  
   terstenYaz(ters+1);
  printf("%c",*ters);
}


int main() {
    
    char ters[]="Tersten yaz";
    terstenYaz(ters);
  

 
    return 0;
}
