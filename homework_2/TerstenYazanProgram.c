/*
KULLANCININ GIRDIGI SAYIYI TERSTEN YAZAN BIR PROGRAMDIR.
*/
#include <math.h>
#include <stdio.h>

int main() {
    int number; //kullanicidan alinan sayi
    int sayinintersi=0; //10'a carpip kendisine esitleyecegimi icin 0'a atama yaptim.
    printf("Bir sayi giriniz:");
    scanf("%d\n",&number);
        
    
    while(number>0){
    sayinintersi = sayinintersi * 10; /*sayiyi 0'a atadigim icin ilk basta sonuc 0 olacak ondan sonra alt islemdeki %10 u ise buraya eklenecek.*/
    sayinintersi = sayinintersi + number%10;/*son sayiyi basa gelmesi icin %10 u aliyorum. */
    number = number/10;/*yukarida %10 alinca birer basamagindaki 0'i kaldirmak icin 10'a boluyorum.*/
    }
printf("\nSayinin tersten yazilisi:%d",sayinintersi);        
        
        

    return 0;
}
