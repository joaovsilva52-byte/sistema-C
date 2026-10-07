#include <stdio.h>
#include <locale.h>

int main(){
	int opc,idade;
	char nome,email;
	char sexo;
	setlocale(LC_ALL,"");
	 
	do{
	printf("====== MENU======\n");
	printf("1- SOFTWARE\n");
	printf("2-HARDWARE\n");
	printf("3-REDE\n");
	printf("0- sair\n");
	printf("Escolha opção\n:");
	scanf("%i",&opc);
	
	
	switch(opc){
	case 1:
	printf("SOFTWARE SELECIONADO\n");	
	break;
	case 2:
	printf("HARDWARE SELECIONADO\n");
	break;
	case 3:
	printf("REDE SELECIONADO\n");
	break;
	default:
		printf("OPÇÃO INVALIDA\n");
		break;
	}
	
	}	
		while(opc>0 || opc>3 );
	printf("PROGRAMA ENCERRADO");
	}

	 
	

