#include <stdio.h>
#include <locale.h>
 int main(){
 	float nota;
 	int i,qtdA;
 	
 	setlocale(LC_ALL,"");
 	 
 	printf("INFORME A QUANTIDADE DE ALUNOS: ");
 	scanf("%i",&qtdA);
 	
 	for(i=0;i!=qtdA;i++){
 	printf("INFORME NOTA DO ESTUDANTE: ");
 	scanf("%f",&nota);
	 	
 	if(nota>=7){
 	printf("ALUNO PASSOU :]\n");	
	}
	else{
	printf("ALUNO PERDEU :[\n");	
	}

	}
	return 0;	 
	}
 
 	
