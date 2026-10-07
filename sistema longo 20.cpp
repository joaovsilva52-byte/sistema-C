#include <stdio.h>
#include <locale.h>
int main(){
	int codigoC,opc,totalcha,tipoC,prioridadeC,software,hardware,rede,urgente,prioritario,normal;
	totalcha=0;
	software=0;
	hardware=0;
	rede=0;
	urgente=0;
	prioritario=0;
	normal=0;
	setlocale(LC_ALL,"");
	do{
		printf("===================\n");
		printf("SISTEMA DE SUPORTE\n");
		printf("===================\n");
		printf("1-RESGISTRAR CHAMADO\n");
		printf("2-RELATORIO\n");
		printf("0-SAIR\n");
		printf("ESCOLHA OPÇÃO :");
		scanf("%i",&opc);
		switch (opc){
			case 1:
		   printf("INFORME CODIGO DO CHAMADO (EX: 1234)\n: ");
		   scanf("%i",&codigoC);
		   printf("SELECIONE O TIPO DE CHAMADO (EX:1-SOFTWARE, 2-HARDWARE, 3-REDE)\n:");
		   scanf("%i",&tipoC);
		   printf("SELECIONE NIVEL DE PRIORIDADE (EX: 1-URGENTE, 2-PRIORITARIO, 3-NORMAL)\n:");
		   scanf("%i",&prioridadeC);
		   if(tipoC==1){
		   	    software++;
		        }else if(tipoC==2){
		     	hardware++;
		        }else if(tipoC==3){
		   	    rede++;
		   }if(prioridadeC==1){
		   	    urgente++;
		    	}else if(prioridadeC==2){
		   		prioritario++;
		   		}else if(prioridadeC==3){
		   			normal++;
				   }
		   totalcha++;
		   break;
		case 2:
			printf("TOTAL CHAMADOS: %i\n",totalcha);
			printf("TOTAL CHAMADOS SOFTWARE: %i\n", software);
			printf("TOTAL CHAMADOS DE HARDWARE: %i\n",hardware);
			printf("TOTAL CHAMADOS DE REDE: %i\n", rede);
			printf("CHAMADOS URGENTES: %i\n", urgente);
			break;
			default:
				printf("OPÇÃO INVALIDA,ESCOLHA OUTRA\n");
				
				
		}
							
			
	}while(opc!=0);
	printf("ENCERRAR PROGRAMA");
	return 0;
}

