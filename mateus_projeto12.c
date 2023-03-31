#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main ()
{
	//setlocale(LC_ALL, "portuguese");
	
	int cod_peca, num_peca, cod_peca2, num_peca2;
	float v_peca, v_peca2, valor, p1, p2;
				
		printf("Digite o codigo da peca 1:\n ");
		scanf ("%d", &cod_peca);	
		
		printf("Digite o numero de pecas 1:\n ");
		scanf ("%d", &num_peca);
		
		printf("Digite o valor da peca 1 :\n ");
		scanf ("%f", &v_peca);
		
		printf("Digite o codigo da peca 2:\n ");
		scanf ("%d", &cod_peca2);	
		
		printf("Digite o numero de pecas 2:\n ");
		scanf ("%d", &num_peca2);
		
		printf("Digite o valor da peca 2:\n ");
		scanf ("%f", &v_peca2);
		
		p1 = num_peca * v_peca;
		
		p2 = num_peca2 * v_peca2;
		
		valor = p1 + p2;
		
		printf("Valor a Pagar: %.2f",valor);
				
					
	return 0;
}


