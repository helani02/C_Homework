#include <stdio.h>

/* bir string alip, ters ceviren bir programdir.*/

int main() {
    
    char *string1="merhaba"; 
    char string2[100];
    char *ptr1,*ptr2;
    
    ptr1=string1+strlen(string1)-1;
    ptr2=string2;
    
    while(ptr1>=string1)
    {
        *ptr2=*ptr1;
         ptr2++;
         ptr1--;
    }
    *ptr2='\0';
    printf("%s",string2);
    
    return 0;
}
