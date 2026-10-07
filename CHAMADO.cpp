# include <stdio.h>
# include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int qtd,i,cod,prioridade;
	printf("Quantidade de chamados:");
	scanf("%i",&qtd);
	
	for ( i= 1; i<= qtd; i++){
		printf("=====chamado %d=====\n",i);
		printf("codigo: ");
		scanf("%i",&cod);
		
		do{
			printf("prioridade [1- urgente 2-prioridade 3- normal]: ");
			scanf("%i",&prioridade);
			
			if(prioridade <1 || prioridade> 3){
				printf("prioridade invalida!\n");
				
			}
		}while (prioridade<1 || prioridade>3);
		
	} if(prioridade== 1 ){
		printf("classigicação: urgente\n");
		
	}else if(prioridade==2){
		printf("classificação: prioritaria\n");
		
	}else {
		printf("classificação: normal\n");
	} 
	printf("\n cadastro finalizados");

	}
	
