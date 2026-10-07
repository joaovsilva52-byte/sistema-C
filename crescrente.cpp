#include <stdio.h>
#include <locale.h>
 int main (){
 	int i;
 	
 	setlocale(LC_ALL,"");
 	for(i=1; i<=20; i++){
 		
 		printf( "numero %i\n",i);
    }
     return 0;
 	}
