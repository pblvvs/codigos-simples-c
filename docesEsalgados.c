#include <stdio.h>

int main(){
	
	int docinhos, salgadinhos, convidados;
	
	printf("Qual a quantidade de docinho para cada convidado? \n");
	scanf("%d", &docinhos);
	
	printf("Qual a quantidade de salgadinhos para cada convidado? \n");
	scanf("%d", &salgadinhos);
	
	printf("Quantas pessoas serao convidadas? \n");
	scanf("%d", &convidados);
	
	printf("Sera necessario comprar %d salgadinhos e %d docinhos.", salgadinhos*convidados, docinhos*convidados);
}
