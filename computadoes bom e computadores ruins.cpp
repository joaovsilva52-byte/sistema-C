#include <stdio.h>
#include<locale.h>
int main(){
	int i,estado,funcionando,defeituoso;
	funcionando=0;
	defeituoso=0;
	setlocale(LC_ALL,"");
	for(i=1;i<=10;i++){
		printf("ESTADO DO COMPUTADOR (INFORME 1 PARA FUNCIONANDO E 0 PARA DEFEITUOSO):");
	    scanf("%i",&estado);
	    if (estado==1){
	    	printf("FUNCIONANDO\n");
	    	funcionando++;
	    	
		}else if(estado==0){
			printf("DEFEITUOSO\n");
			defeituoso++;
		}else if (estado!=0 && 1){
			printf("OPÇÃO INVALIDA, ESCOLHA OUTRA\n");
		}
		}printf("=====RELATORIO=====\n");
        printf("FUNCIONANDO: %d\n",funcionando);
        printf("DEFEITUOSO: %d\n",defeituoso);
  

        }

