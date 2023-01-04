#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/* iki string alip, birlestiren bir fonksiyon yazmak,
ornek: "hello" ve "world"kelimelerin parametre olarak alip "hello world"stringini dondurmelidir.*/
char* string_birlestir(char *str1, char* str2){
    int a = 0, b = 0, c;
    while (str1[a] != '\0') a++;
    while (str2[b] != '\0') b++;
    char *toplam = (char*)malloc(sizeof(char)*(a+b+1));
    for (c = 0; c < a; c++)
        *(toplam + c) = str1[c];
    for (; c < a+b; c++)
        *(toplam + c) = str2[c - a];
    toplam[c] = '\0';
    return toplam;

}

int main(void){
    int i = 0;
    char *yazi1 = "Hello";
    char *yazi2 = " World";
    yazi1 = string_birlestir(yazi1, yazi2);
    printf("%s", yazi1);
    free(yazi1);
    return 0;
}
