#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int pessoas = 0, np = 0, i = 0, d =0;
	char escuderia[10], f[10];
	
	printf("Informe quantas pesoas farao parte da pesquisa: ");
	scanf("%d", &pessoas);
	
		if (pessoas<5){
		printf("\nNumero insuficiente de pessoas para a pesquisa.\n\n");	
			return 0;
			
			}else{
			printf("\nNumero valido de pessoas para a pesquisa!!\n\n");
		}
			
			printf("Informe qual equipe foi mais privilegiada na opiniao de voces, de acordo com a seguinte legenda:\n");
			printf("F = Ferrari, R = Red Bull e M = Mercedes\n");
			printf("Qualquer outra letra sera atribuida como outra equipe privilegiada diferente destas tres\n\n");
			
			for(np=1;np<=pessoas;np++){
			if(np==pessoas){
			printf("\nUltima votacao:");
			scanf("%s", &escuderia);
		}else{ 
			printf("\nVotacao %d:", np);
			scanf("%s", &escuderia);	
		}
			}
			
			
			
			
			
		
			
	return 0;
}
