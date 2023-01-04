//
/*soru_9
Kullanıcıdan 1994 ile 1999 arasında bir yıl girdisi yaptıran ve for döngüleri kullanılarak ilgili yılın
takvimini ekrana yazdıran bir program yazınız.
*/
#include <stdio.h>

int main( void ){

int yil;
int artik_yil;
int gunler;
int ay;
int n;//haftanın ilk günün numarası
int gunNo;

  do {
      printf("1994 ile 1999 arasında bir yıl giriniz: " );
      scanf("%d", &yil);
  } while ( yil < 1994 || yil > 1999 );
      switch (yil) {
        case 1994:
        n = 6;
        break;

        case 1995:
        n = 7;
        break;

        case 1996:
        n = 1;
        break;

        case 1997:
        n = 3;
        break;

        case 1998:
        n = 4;
        break;

        case 1999:
        n = 5;
        break;
      } 
      if ( yil % 400 == 0 ){
          artik_yil = 1;
      }
      else if ( yil% 4 == 0 && yil % 100 != 0 ){
          artik_yil = 1;
      }
      else{
          artik_yil = 0;
      }
    for ( ay = 1; ay <= 12; ay++ ){
      switch (ay){
        case 1:
        printf( "\n\t\t  Ocak\n");
        gunler = 31;
        break;

        case 2:
        printf( "\n\n\t\t  Şubat\n");
        gunler = artik_yil == 1 ? 29 : 28;
        break;

        case 3:
        printf( "\n\n\t\t  Mart\n");
        gunler = 31;
        break;

        case 4:
        printf( "\n\n\t\t  Nisan\n");
        gunler = 30;
        break;

        case 5:
        printf( "\n\n\t\t  Mayıs\n");
        gunler = 31;
        break;

        case 6:
        printf( "\n\n\t\t  Haziran\n");
        gunler = 30;
        break;

        case 7:
        printf( "\n\n\t\t  Temmuz\n");
        gunler = 31;
        break;

        case 8:
        printf( "\n\n\t\t  Ağustos\n");
        gunler = 31;
        break;

        case 9:
        printf( "\n\n\t\t  Eylül\n");
        gunler = 30;
        break;

        case 10:
        printf( "\n\n\t\t  Ekim\n");
        gunler = 31;
        break;

        case 11:
        printf( "\n\n\t\t  Kasım\n");
        gunler = 30;
        break;

        case 12:
        printf( "\n\n\t\t  Aralık\n");
        gunler = 31;
        break;
        }

    printf(" Pzt Sal Çar Per Cum Cmt paz\n" );
   
    for ( gunNo = 1; gunNo <= n ; gunNo++ ){
      printf("   ");
    }
    for ( gunNo = 1; gunNo <= gunler; gunNo++ ){
      printf( "%2d", gunNo );

      if ( (gunNo+n) % 7 > 0 ){
        printf( "  " );
      }
      else {
        printf( "\n " );
      }
      n = (n+ gunler)%7 ;
      
    }
  }
return 0;
}