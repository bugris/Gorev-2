#include<iostream>
int main(){
	int sayi;

	do {
		printf ( "sayıyı giriniz:" );
		scanf("%d",&sayi);
		if ( sayi>999 || sayi<=0 )
		     printf("girdiginiz sayı gecersizdir"  "0 ile 999 arasinda bir deger girmeniz gerekmektedir");
		else
			break;
	}while( 1907 );

	printf( "%d sayısı, '",sayi );

	switch ( sayi/100 ) {
		case 1: 
		printf( "yüz" ); 	
		break;
		case 2: 
		printf( "iki yüz" ); 	
		break;
		case 3:	
		printf( "üç yüz" ); 	
		break;
		case 4: 
		printf( "dört yüz" ); 	
		break;
		case 5: 
		printf( "beş yüz" ); 	
		break;
		case 6:	
		printf( "altı yüz" ); 	
		break;
		case 7: 
		printf( "yedi yüz" ); 	
		break;
		case 8:
		printf( "sekiz yüz" ); 	
		break;
		case 9: 
		printf( "dokuz yüz" ); 	
	}
    
    
    
    switch ( (sayi%100)/10 ) {
		case 1: 
		printf( "on" ); 	
		break;
		case 2: 
		printf( "yirmi" ); 	
		break;
		case 3: 
		printf( "otuz" ); 	
		break;
		case 4: 
		printf( "kırk" ); 	
		break;
		case 5: 
		printf( "elli" ); 	
		break;
		case 6: 
		printf( "altmıs" ); 	
		break;
		case 7: 
		printf( "yetmiş" ); 	
		break;
		case 8: 
		printf( "seksen" ); 	
		break;
		case 9: 
		printf( "doksan" );
	}

    switch ( (sayi%10) ) {
		case 1: 
		printf( "bir" ); 	
		break;
		case 2: 
		printf( "iki" ); 	
		break;
		case 3: 
		printf( "üç" ); 	
		break;
		case 4: 
		printf( "dört" ); 	
		break;
		case 5: 
		printf( "beş" );	
		break;
		case 6: 
		printf( "altı" ); 	
		break;
		case 7: 
		printf( "yedi" ); 	
		break;
		case 8: 
		printf( "sekiz" );	
		break;
		case 9: 
		printf( "dokuz" );	
		
    }
	
		
	printf( "' olarak yazılır" );
	
	return 0;
	
}