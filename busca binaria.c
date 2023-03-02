#include <stdio.h>

#define TAM 100	
int vetor[TAM];
int tentativa = 0;
void busca(buscado){
	int ini = vetor[0], fim = vetor[TAM];
	int encontrado = 0;
	int meio;
	meio = TAM/2;
	int aux;
	int m;
	while(encontrado == 0){
		if(meio == buscado){
			encontrado = 1;
			printf("o numero foi encontrado na posicao %d \n",vetor[meio]);
		}
		else{
			if(meio < buscado){
				ini = vetor[meio];
				meio = (fim+ini)/2;
			}
			else if(meio > buscado){
				fim = vetor[meio];
				meio = (fim+ini)/2;
			}	
		}
		tentativa++;
	}
}

int main(){
	int i;
	for(i = 0; i < TAM+1; i++){
        vetor[i] = i;
	}
	
	int buscado;
	scanf("%d", &buscado);
	busca(buscado);	
 	
	for(i = 0; i < TAM;i++){
		printf("%d ", vetor[i]);
	}
	printf("foram %d tentativas", tentativa);
	return 0;
}