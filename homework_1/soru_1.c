//
/*soru_1
Beş basamaklı bir sayı girişi yapılan, bu sayıyı ayrı ayrı basamaklarına ayıran ve her basamak
arasına üç boşluk karakteri koyarak ekrana yazdıran bir program yazın. Örneğin, eğer kullanıcı
42139 girdiyse ekran çıktısı şu şekilde olmalıdır: 4 2 1 3 9
*/
#include <stdio.h>

int main() {
    
    int a,b,c,d,e,f,num;
    
    printf("Lütfen 5 basamaklı sayi giriniz: ");
    scanf("%d",&num);
    
    a = num;
    b = a / 10000;
    c = a / 1000 % 10;
    d = a / 100 % 10;
    e = a / 10 % 10;
    f = a % 10;
    
    printf("%d   %d   %d   %d   %d",b,c,d,e,f);

    
    return 0;
}