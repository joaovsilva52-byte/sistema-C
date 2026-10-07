#include <stdio.h>
#include <locale.h>

int main(){
	int numeroIn;
	 
	setlocale(LC_ALL,"");
	printf("INFORME OS NUMEROS INTEIROS: ");
	scanf("%i",&numeroIn);
	
	while(numeroIn!=0){
		printf("NUMERO VALIDO\n");
		printf("CONTINUE DIGITANDO: ");
		scanf("%i",&numeroIn);
	}
	printf("PROGRAMA ENCERRADO");
	
}
