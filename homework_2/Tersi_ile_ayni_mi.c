#include<stdio.h>
#include<string.h>
int tersi_ile_ayni_mi( char [] );
int main( void )
{
	char test_katari[50];
	strcpy( test_katari, "eve" );
	printf( "%d\n", tersi_ile_ayni_mi( test_katari ) );
	return 0;
}
int tersi_ile_ayni_mi( char katar[] )
{
	int boyut =0 , i;
	// Once katar boyutu bulunuyor
	for( boyut = 0; katar[ boyut ]!='\0'; boyut++ );
	

	for( i = 0; i < boyut/2; i++ ) {
		if( katar[i] != katar[ boyut - i - 1 ] )
			return 0;
	}
	return 1;
}
