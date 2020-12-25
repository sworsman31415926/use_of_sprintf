#include<stdio.h>

FILE *stream;

void main( void )  
{  
	int i = 10;  
	double fp = 1.5;  
	char s[] = "this is a string";  
	char c = '\n';  

	stream = fopen( "fprintf.out", "w" );  
	fprintf( stream, "%s%c", s, c );  
	fprintf( stream, "%d\n", i );  
	fprintf( stream, "%f\n", fp );  
	fclose( stream );  
	//system( "type fprintf.out" ); 
    printf("end");	
}  

/*屏幕输出：  

this is a string  
10  
1.500000 
*/