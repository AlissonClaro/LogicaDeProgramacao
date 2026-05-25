#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//vetor bidimencional
//	int numeros [2][3] = {
//	//       0, 1, 2
//			{1, 2, 3}, //0
//			{4, 5, 6}  //1
//	
//	};
//	
//	int linha, coluna;
//	
//	for (linha = 0; linha < 2;linha++){
//		for (coluna = 0; coluna < 3;coluna++) {
//			printf("Digite um valor [%d, %d]:", linha, coluna);
//			scanf("%d", &numeros [linha][coluna]);
//		}
//	}
//	
//	for (linha = 0; linha < 2;linha++){
//		for (coluna = 0; coluna < 3; coluna++) {
//			printf("%d ", numeros [linha][coluna]);
//		}
//		
//		printf("\n");
//	}
//		
//	return 0;
//}

int tres() {
	int matriz[2][2][3];
	
	int camada, linha, coluna;
	
	for (camada = 0; camada < 2; camada++){
		printf("Camada %d\n", camada);
		for(linha = 0; linha <2; linha++){
			for(coluna = 0; coluna <3; coluna++){
				printf("Digite um numero [%d, %d], linha, coluna");
				scanf("%d", &matriz[camada][linha][coluna]);
			}
		}
	}
			
		}
	return 0;		

	
int main() {
	tres()
		
	return 0;
}

	
	
