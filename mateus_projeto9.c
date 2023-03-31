#include <stdio.h>
#include <stdlib.h>


int main() {
	int mes = 0, ano = 0;
	float cubicos = 0;
	
		printf("== Investigacao sobre o consumo de agua mensal ==\n\n");
	
			printf("informe quantos metros cubicos (m3) voce consome por mes: ");
			scanf_s("%f", &cubicos);

				printf("\n\ninforme o ano: ");
				scanf_s("%d", &ano);

					printf("\n\nInforme o mes atual com 1 para Janeiro, podendo chegar a 12 para Dezembro: ");
					scanf_s("%d", &mes);
	
						if (cubicos <= 2.1) {
							printf("\nConsumo: BAIXO\n\n");
	}
							if (cubicos > 2.1 && cubicos < 6.1) {
								printf("\nConsumo: NORMAL\n\n");
	}
								if (cubicos > 6.1 && cubicos < 10.5) {
									printf("\nConsumo: ALTO\n\n");
	}
									if (cubicos > 10.5) {
										printf("\nConsumo: EXAGERADO\n\n");
	}
										if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0) {
											printf("O ano de %d e bissexto.\n\n", ano);
	}
											else {
												printf("O ano de %d nao bissexto.\n\n", ano);
	}
													printf ("Consumo informado: %.1f\n\n", cubicos);
										
														printf("O mes informado foi: Mes %d\n\n", mes);
											
															printf("Data da pesquisa: Mes %d de 2022.\n\n", mes);
											
											
	return 0;
}
