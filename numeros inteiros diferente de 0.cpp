#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
  int i,numeroIn;
  
  printf("informe numeros inteiros: ");
  scanf("%i",&numeroIn);
  
  while (numeroIn<0){
  	printf("NUMERO INVALIDO\n");
  	printf("DIGITE NOVAMENTE\n: ");
  	scanf("%i",&numeroIn);  
  	 
  	}
  printf("PROGRAMA ENCERRADO");
}
