#include <stdio.h>

int main(){
	
	float Patrimonio, Renda;
	
	printf("Quanto vale o seu patrimonio em Reais?");
	scanf("%f", &Patrimonio);
	
	printf("Qual a sua renda mensal em Reais? ");
	scanf("%f", &Renda);
	
	if(Patrimonio > 250000 || Renda > 15000){
		printf("CREDITO AUTORIZADO");
	} else {
		printf("CREDITO NAO AUTORIZADO");
	}
	
}
