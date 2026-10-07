#include <stdio.h>
#include<locale.h>
int main(){
	int i;
	float valor,totalVL;
	totalVL=0;
		setlocale(LC_ALL,"");
		printf("====REGISTRO DE VENDAS====\n");
		for(i=1;i<=5;i++){
			printf("INFORME O VALOR DA VENDA %i: ", i);
			scanf("%f",&valor);
			totalVL+=valor;
		}
		printf("TOTAL DE VENDAS %.2f: ", totalVL);
	}

