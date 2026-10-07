#include <stdio.h>
#include <locale.h>

int main(){
	int opc,idade;
;
	setlocale(LC_ALL,"");
	 
	do{
	printf("====== MENU======\n");
	printf("1- CADASTRAR\n");
	printf("2-CONSULTAR\n");
	printf("3-RELATORIO\n");
	printf("0- sair\n");
	printf("Escolha opção\n:");
	scanf("%i",&opc);
	
	switch(opc){
	case 1:
	printf("CADASTRO\n");	
	break;
	case 2:
	printf("CONSULTAR\n");
	break;
	case 3:
	printf("RELATORIO\n");
	break;
	
	}	
	 
	}
	while(opc>0 || opc>3);
	printf("PROGRAMA ENCERRADO");
	 
	
}
