#include <stdio.h>

int main() {
int idade = 0;

printf("Informe a idade:\n");
scanf("%d", &idade);
printf("sua idade: %d\n", idade);

	if(idade <1){
	printf("Nao nasceu\n");
	}else{
		if(idade<=15){
		printf("Nao vota\n");
		}else{
			if(idade<18){
			printf("Voto opcional\n");
			}else{
				if(idade<65){
				if(idade == 41){
				printf("Premio 1\n");
				}else{
				printf("Voto obrigatorio\n");
				}
				}else{
					if(idade == 82){
					printf("Premio 2\n");
					}else{
					printf("Voto Opcional\n");
					}
				}
			}
		}
	}
return 0;
}

