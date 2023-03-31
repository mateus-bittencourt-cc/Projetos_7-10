#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main() {
setlocale(LC_ALL, "Portuguese");
int ddd = 0, telefone = 0, ano1 = 0, ano2 = 0, ano3 = 0, numero = 0, cep = 0, estadual = 0, municipal = 0, tpj = 0, cnae = 0;
char nome[200], social [200], end[200], bairro[200], complemento[200], estado[2], ident [10], nascimento [8], email [200], datav [10], contresp [5], placa1 [10], placa2 [10], placa3 [10], modelo1 [100], modelo2 [100], modelo3 [100], cor1 [100], cor2 [100], cor3 [100], resp1 [5], resp2 [5], resp3 [5], cpf [11], cnpj [14];

printf("<Credenciamento do Estacionamento>\n\n");

printf("Informe Razão social:\n");
fgets(social, 200, stdin);

printf("\nInforme Nome Completo:\n");
fgets(nome, 200, stdin);

printf("\nInforme o endereço:\n");
fgets(end, 200, stdin);

printf("\nInforme o bairro:\n");
fgets(bairro,200,stdin);

printf("\nComplemento:\n");
fgets(complemento,200,stdin);

printf("\nInforme o número:\n");
scanf("%d", &numero);


printf("\nInforme o CEP:\n");
scanf("%d", &cep);


printf("\nInforme seu estado:\n");
scanf("%s", &estado);


printf("\nInforme o DDD:\n");
scanf("%d", &ddd);


printf("\nInforme o telefone:\n");
scanf("%d", &telefone);


printf("\nEscolha: CPF ou CNPJ\n");
scanf("%s", &ident);


if(strcmp(ident,"cpf")== 0){
printf("\nInforme o CPF:\n");
scanf("%d", &cpf);

}else{
printf("\nInforme o CNPJ:\n");
scanf("%d", &cnpj);

printf("\nInforme sua Insc Estadual:\n");
scanf("%d", &estadual);

printf("\nInforme sua Insc Municipal:\n");
scanf("%d", &municipal);

printf("\nInforme o CNAE:\n");
scanf("%d", &cnae);

printf("\nInforme o telefone do responsavel:\n");
scanf("%d", &tpj);


}

printf("\nInforme a data de nascimento:\n");
scanf("%s", &nascimento);




printf("\nInforme o email:\n");
scanf("%s", &email);
printf("\nRecebimento de boletos por email, sim ou nao?\n");
scanf("%s", &contresp);


if(strcmp (resp1, "sim")== 0){
printf("\nEmail de envio: \n %s\n", email);
}else{


}

printf("\nInforme a data:\n");
scanf("%s", &datav);

printf("\nDADOS DOS VEICULOS\n");


printf("\nInforme a placa 1:\n");
scanf("%s", &placa1);

printf("\nInforme o modelo:\n");
scanf("%s", &modelo1);

printf("\nInforme o ano:\n");
scanf("%d", &ano1);

printf("\nInforme a cor:\n");
scanf("%s", cor1);

printf("\nAdicionar mais um veiculo?\n");
scanf("%s", &resp2);
printf("\nVocê escolheu: %s\n", resp2);
if(strcmp(resp2, "nao")== 0){
	
printf("\nDados Informados do veiculo 1:\nPlaca: %s\nModelo: %s\nAno: %d\nCor: %s\n", placa1, modelo1, ano1, cor1);

printf("\nRazão Social Informada:\n%s\n", social);

printf("\nNome Informado:\n%s\n", nome);

printf("\nEndereco Informado:\n Endereco:\n%s\nNumero: \n%d\nBairro: \nn%s\nComplemento: \n%s\n", end, numero, bairro, complemento);

printf("\nCEP Informado: \n%d\n", cep);

printf("\nEstado Informado: \n%s\n", estado);

printf("\nDDD Informado: \n%d\n", ddd);

printf("\nTelefone Informado: \n%d\n", &telefone);

printf("\nVocê escolheu: \n%s\n", &ident);

printf("\nDados PJ informados:\nCNPJ: %d\nInsc. Estadual: %d\nInsc. Municipal: %d\nCNAE: %d\nTPJ: %d\n", cnpj, estadual, municipal, cnae, tpj);

printf("\nData de nascimento informada: \n%s\n", nascimento);

printf("\nRecebimento de email: \n%s\n", contresp);

printf("\nEmail informado: \n%s\n", email);

printf("\nVocê escolheu nao informar mais veiculos: \n%s\n", resp2);

printf("\nA data informada foi:\n%s\n", datav);

}else{
	
if(strcmp(resp2, "sim")== 0){
printf("\nInforme a placa 2:\n");
scanf("%s", &placa2);

printf("\nInforme o modelo:\n");
scanf("%s", &modelo2);

printf("\nInforme o ano:\n");
scanf("%d", &ano2);

printf("\nInforme a cor:\n");
scanf("%s", cor2);

printf("\nAdicionar mais um veiculo?\n");
scanf("%s", &resp3);
printf("\nVocê escolheu: %s\n", resp3);
}if(strcmp(resp3, "sim")== 0){
	
printf("\nInforme a placa 3:\n");
scanf("%s", &placa3);

printf("\nInforme o modelo:\n");
scanf("%s", &modelo3);

printf("\nInforme o ano:\n");
scanf("%d", &ano3);

printf("\nInforme a cor:\n");
scanf("%s", cor3);

printf("\nDados do veiculo 1:\n Placa: %s\n Modelo: %s\n Ano: %d\n Cor: %s\n", placa1, modelo1, ano1, cor1);

printf("\nDados do veiculo 2:\n Placa: %s\n Modelo: %s\n Ano: %d\n Cor: %s\n", placa2, modelo2, ano2, cor2);

printf("\nDados do veiculo 3:\n Placa: %s\n Modelo: %s\n Ano: %d\n Cor: %s\n", placa3, modelo3, ano3, cor3);

printf("\nRazão Social Informada:\n%s\n", social);

printf("\nNome Informado:\n%s\n", nome);

printf("\nEndereco Informado:\n Endereco:\n%s\nNumero: \n%d\nBairro: \nn%s\nComplemento: \n%s\n", end, numero, bairro, complemento);

printf("\nCEP Informado: \n%d\n", cep);

printf("\nEstado Informado: \n%s\n", estado);

printf("\nDDD Informado: \n%d\n", ddd);

printf("\nTelefone Informado: \n%d\n", &telefone);

printf("\nVocê escolheu: \n%s\n", &ident);

printf("\nDados PJ informados:\nCNPJ: %d\nInsc. Estadual: %d\nInsc. Municipal: %d\nCNAE: %d\nTPJ: %d\n", cnpj, estadual, municipal, cnae, tpj);

printf("\nData de nascimento informada: \n%s\n", nascimento);

printf("\nRecebimento de email: \n%s\n", contresp);

printf("\nEmail informado: \n%s\n", email);

printf("\nVocê escolheu nao informar mais veiculos: \n%s\n", resp2);

printf("\nA data informada foi:\n%s\n", datav);
}else{
printf("\nDados do veiculo 1:\n Placa: %s\n Modelo: %s\n Ano: %d\n Cor: %s\n", placa1, modelo1, ano1, cor1);

printf("\nDados do veiculo 2:\n Placa: %s\n Modelo: %s\n Ano: %d\n Cor: %s\n", placa2, modelo2, ano2, cor2);


printf("\nRazão Social Informada:\n%s\n", social);

printf("\nNome Informado:\n%s\n", nome);

printf("\nEndereco Informado:\n Endereco:\n%s\nNumero: \n%d\nBairro: \nn%s\nComplemento: \n%s\n", end, numero, bairro, complemento);

printf("\nCEP Informado: \n%d\n", cep);

printf("\nEstado Informado: \n%s\n", estado);

printf("\nDDD Informado: \n%d\n", ddd);

printf("\nTelefone Informado: \n%d\n", &telefone);

printf("\nVocê escolheu: \n%s\n", &ident);

printf("\nDados PJ informados:\nCNPJ: %d\nInsc. Estadual: %d\nInsc. Municipal: %d\nCNAE: %d\nTPJ: %d\n", cnpj, estadual, municipal, cnae, tpj);

printf("\nData de nascimento informada: \n%s\n", nascimento);

printf("\nRecebimento de email: \n%s\n", contresp);

printf("\nEmail informado: \n%s\n", email);

printf("\nVocê escolheu nao informar mais veiculos: \n%s\n", resp2);

printf("\nA data informada foi:\n%s\n", datav);


}

}

return 0;
}
