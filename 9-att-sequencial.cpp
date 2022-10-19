#include <stdio.h>

int main(){
	char nome[100];
	double salarioF, vendas, total;
	
	printf("Digite seu nome: ");
	fgets(nome, 100, stdin);
	
	printf("Digite o salario fixo: ");
	scanf("%lf", &salarioF);
	printf("Digite o numero de vendas efetuadas:  ");
	scanf("%lf", &vendas);
	
	total = salarioF + vendas * 0.15;
	
	printf("Total a receber ao fim do mes: %.2lf", total);
	
	return(0);
}
