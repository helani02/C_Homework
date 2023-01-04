//
/* soru_6
 Üç tamsayı alan ve bu sayıların bir dik üçgenin dik üçgenin üç kenarı olup olamayacağına karar
 veren bir programdır
*/
#include <stdio.h>

int main() {
    int a,b,c;
    
    printf("1.sayiyi giriniz: ");
    scanf("%d",&a);
    printf("2.sayiyi giriniz: ");
    scanf("%d",&b);
    printf("3.sayiyi giriniz: ");
    scanf("%d",&c);
    
    if ((a*a)+(b*b)==(c*c))
        printf("girilen değerler dik üçgen yapar.");
    
    else if((a*a)+(c*c)==(b*b))
        printf("girilen değerler dik üçgen yapar.");
    
    else if((b*b)+(c*c)==(a*a))
        printf("girilen değerler dik üçgen yapar.");
        
    else 
        printf("girilen değrler dik ücgen yapmaz.");
    
    return 0;
}