#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int i;
	int num;
	int result;
	  printf(" qual a tabuada a ser impresa?");
	  scanf("%d",&num);
	  
	  for(i= 1; i<=10;i++){
	  	result= num * i;
	  printf("%d x %d = %d\n",num,i,result);
	  }
	 return 0;
}
	
