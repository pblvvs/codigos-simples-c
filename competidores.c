#include <stdio.h>
int main(){
	int Competidores;
	printf("Inscritos: ");
	scanf("%d", &Competidores);
	int Aux = 1, Inscrito = 1;
	int V1,V2,V3,V4,V5,V6;
	while(Aux <= Competidores){
		printf("Informe as pontuacoes do inscrito %d", Inscrito);
		scanf("%d %d %d %d %d %d", &V1,&V2,&V3,&V4,&V5,&V6);
		int Final = 0;
		Final = V1 + V2 + V3 + V4 + V5 + V6;
		 if(Final >= 100){
		 	printf("Classificado");
		 } else { printf("Eliminado");
		 }
		 Aux++;
		 Inscrito++;
	}
	return 0;
}
