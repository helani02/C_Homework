#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/*Bir string icinde verilen bir kelimeyi verilen baska bir kelime  ile
degistiren bir fonksiyon. */

void ters_cevir(const char *string,const char *aranankelime,const const char *yenikelime) {
   int i = 0, j = 0;
   int str1 = strlen(yenikelime);
   int str2 = strlen(aranankelime);
   for (i = 0; string[i] != '\0'; i++)
    {
      if (strstr(&string[i], aranankelime) == &string[i])
       {
         j++;
         i += str2 - 1;
       }
    }
   char *yeniString = (char *)malloc(i + j * (str1 - str2) + 1);
   i = 0;
   while (*string) {
      if (strstr(string, aranankelime) == string) 
      {
         strcpy(&yeniString[i], yenikelime);
         i += str1;
         string += str2;
      }
      else
      yeniString[i++] = *string++;
   }
   printf("yeni cumle: %s\n", yeniString); //yeni cumleyi yazdirmak
}
int main() {
   char str[] = "Ali eve gel.";
   char c[] = "eve";
   char d[] = "okula";
   printf("eski cumle: %s\n", str); //eski cumleyi yazdirmak icin
   ters_cevir(str, c, d); //str=cumleyi yazar, c=eve kelimesi cikartir yerine d=okula getirir.
   return 0;
}
