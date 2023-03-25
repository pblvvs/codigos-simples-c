#include <stdio.h>

int main(){
	
	int F, I;
	
	printf("Qual a sua Altura em centimetros?\n");
	scanf("%d", &F);
	
	printf("Qual a sua Idade?\n");
	scanf("%d", &I);
	
	int qtdeBrinquedos = 0;
	
	if(F >= 150 && I >= 12){
		qtdeBrinquedos++;
	}
	
	if(F >= 140 && I >= 14){
		qtdeBrinquedos++;
	}
	
	if(F >= 170 || I >= 16){
		qtdeBrinquedos++;
	}
	
	printf("A quantidade de brinquedos que voce pode brincar eh: %d.", qtdeBrinquedos);
	return 0;
}
