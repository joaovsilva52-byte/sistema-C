#include <stdio.h>
#include <locale.h>

int main(){
   int i;
   setlocale(LC_ALL,"");
   for(i=1;i<=50;i+=2){
    printf("numero impar %i\n",i);	
   }
   return 0;
  }
