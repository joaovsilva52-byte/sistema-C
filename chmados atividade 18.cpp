#include <stdio.h>
#include<locale.h>
int main(){
	int i,ti,software,hardware,rede,totalAT;
	char chamados [100];
	software=0;
	hardware=0;
	rede=0;
	totalAT=0;
	setlocale(LC_ALL,"");
	printf("====CHAMADOS DO DIA====\n");
	for(i=1;i<=10;i++){
		printf("INFORME CHAMADO\n: ");
		scanf(" %s",&chamados);
		software++;
		hardware++;
		rede++;
		}printf("RELATORIO");
		printf("CHAMADOS PARA SOFTWARE: %i",software);
		printf("CHAMADOS PARA HARDWARE: %i",hardware);
		printf("CHAMADOS PARA REDE: %i",rede);
		printf("TOTAL DE ATENDIMENTOS:");
		
		
	

        }

