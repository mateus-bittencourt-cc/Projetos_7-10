#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main ()
{


	
	char nome[50];
	float salario, vendas, f_mes;

	printf("Digite o nome do Vendedor: ");
		scanf("%s", nome);
		
			printf("Digite o salario fixo do Vendedor: ");
				scanf("%f", &salario);
				
				printf("Digite o total de vendas do mes em R$ do vendedor: ");
					scanf("%f", &vendas);
					
					f_mes = vendas * 0.15 + salario;
					
					printf ("Salario: %.2f", f_mes);
					
					
		

		
		


	return 0;
}


