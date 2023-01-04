//
//soru_7
//piramidi oluşturacak bir C programıdır.
#include<stdio.h>

int main()
{
	int i,j,n,m;
  int k=8;

	for(i=0; i<=4; i++){
		for(j=0; j<=i; j++)//sol taraftaki piramid için
		{		
			if(j%2==0)
				printf("0");
			else
				printf("1");
		}
		for(n=1; n<=k; n++)//ortadaki boşluklar için 
		{
			printf(" ");
		}
			k = k-2;
		for(m=0; m<=i; m++)//sağ taraftaki piramid için
		{
			if(m%2==0)
			  printf("0");
			else
			  printf("1");	
		}
		printf("\n");
	}
    return 0;
}