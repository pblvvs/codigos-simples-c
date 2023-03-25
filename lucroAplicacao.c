#include <stdio.h>

int main(){
	
	float dinheiro, meses;
	
	printf("Qual a aplicacao inicial?\n");
	scanf("%f", &dinheiro);
	
	printf("Por quantos meses voce aplicou?\n");
	scanf("%f", &meses);
	
	float A = 1, mes = 1, total = dinheiro;
	
	while(A <= meses){
		printf("Mes %.0f: R$%.2f - R$%.2f\n", mes, dinheiro, total);
		dinheiro = dinheiro + 50;
		total = total + dinheiro;
		mes++;
		A++;
	}
	
	
}
