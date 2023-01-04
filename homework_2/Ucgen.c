
/*
KULLANICININ GIRDIGI SAYIYA KADAR DESEN UCGENI BASAN BIR PROGRAMDIR.
*/
#include<stdio.h>

int main(void){

int n;
int x,y,z,t;
printf("n sayisini giriniz:\n");
scanf("%d",&n);

for(x=1;x<=n;x++){ //satir sayini yazdirir.

  for(y=1;y<=n-x;y++){ //soldaki bosluklari yazdirir.
    printf(" ");
  }
  for(z=1;z<=x;z++){ //ucgenin 1'den n'e kadar sayilari alt alta yaazdirir.
    printf("%d",z);
  }
  for(t=x-1;t>=1;t--) //ucgenin sag tarafi sayilari tersten yazdirir.
  printf("%d",t);
  
  printf("\n");


}



return 0;
}

