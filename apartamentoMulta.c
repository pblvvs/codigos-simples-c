#include <stdio.h>

int main(){
	
	int Apto; 
	float Agua, Tempo;
	
	printf("Qual o numero do seu apartamento?\n");
	scanf("%d", &Apto);
	
	printf("Qual a vazao de agua utilizada?\n");
	scanf("%f", &Agua);
	
	printf("Quanto tempo foi utilizada?\n");
	scanf("%f", &Tempo);
	
	float Litros;
	
	Litros = Tempo/60*Agua;
	
	printf("%d\n", Apto);
	printf("%.2f\n", Litros);
	
	if(Litros > 200){
		printf("COM MULTA\n");
	} else{
		printf("SEM MULTA\n");
	}
	
	int Sim;
	
	printf("Deseja continuar? Se sim, insira 1, se nao, insira 2.\n");
	scanf("%d", &Sim);
	
	if(Sim=1){
		return main();
	}
	
 }
