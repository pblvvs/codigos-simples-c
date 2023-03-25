#include <stdio.h>

int main(){
	
	float amarelas, vermelhas, brancas;
	
	printf("Qual o valor das Rosas Amarelas?\n");
	scanf("%f", &amarelas);
	
	printf("Qual o valor das Rosas Vermelhas?\n");
	scanf("%f", &vermelhas);
	
	printf("Qual o valor das Rosas Brancas?\n");
	scanf("%f", &brancas);
	
	int qtdeAmarelas, qtdeVermelhas, qtdeBrancas;
	
	printf("Quantas Rosas Amarelas o cliente deseja no buque?\n");
	scanf("%d", &qtdeAmarelas);
	
	printf("Quantas Rosas Vermelhas o cliente deseja no buque?\n");
	scanf("%d", &qtdeVermelhas);
	
	printf("Quantas Rosas Amarelas o cliente deseja no buque?\n");
	scanf("%d", &qtdeBrancas);
	
	printf("O Valor do buque sera de R$%0.2f.", amarelas*qtdeAmarelas + brancas*qtdeBrancas + vermelhas*qtdeVermelhas);
}
