/*
+ VE * ISARTLERINDEN OLUSAN baklava dilimi SEKLI BENZEYEN OLUSTURAN BIR PROGRAMDIR
*/

#include <stdio.h>

   int main(void) {
    
    
    int n; //kullanici tarafindan girilen satir ve sutun sayisi
    int a, b, c;
    
    printf("n sayisini giriniz\n");
    scanf("%d",&n);
    	
    n=(n-1)/2;
 
	 for(a=0;a<=n;a++) //ilk for satir sayisini yazdirir
	 {

  		for(b=0;b<=n-a-1;b++) // ust sol yildizlari yazdirir
   			 printf("*");
  
  		for(c=0;c<=2*a;c++) // ust orta artilari yazdirir 
   			 printf("+");

 		 for(b=n-1;b>a-1;b--) // ust sag yildizlari yazdirir
   			 printf("*");
    
    		printf("\n");

 	}
 	for (a=0; a<n;a++) //alt kisminin satirlari yazdirir
		{ 
 		 for (b=0;b<=a;b++) //alt sol yildizlari yazdirir
    		printf("*");

  		 for (c=a*2;c<=n*2-2;c++) //alt orta artilari yazdirir
   			printf("+"); 

  		 for(b=0;b<=a;b++) //alt sag yildizlari yazdirir
    		printf("*");
 
  			printf("\n");
 
}
    
    
    return 0;
}

