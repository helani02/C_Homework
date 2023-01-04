/*
TERIM SAYIYI KULLANICI TARAFINDAN GIREREK SERI TOPLAMI BULAN BIR PROGRAMDIR.
*/

#include <stdio.h>

int main(void)
{
int n; //KULLANICIDAN ALINAN TERIM SAYI
int i=0; 
float toplam=0.0;

	printf("Terim sayisini giriniz:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		
		printf("1/%d+",i);//1/1 + 1/2 + 1/3 +...+1/n seklinde toplama icin.
		toplam = toplam+(1.0/i);
	}

	printf("\nserinin toplami %.5f",toplam);


	return 0;	
}
