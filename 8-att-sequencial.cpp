#include <stdio.h>

int main(){
	
	int a, b, c, d, dif;
	
	printf("Digite o valor de A: ");
	scanf("%d", &a);
	printf("Digite o valor de B: ");
	scanf("%d", &b);
	printf("Digite o valor de C: ");
	scanf("%d", &c);
	printf("Digite o valor de D: ");
	scanf("%d", &d);
	
	dif =a*b-c*d;
	
	printf("DIFERENCA = (%d * %d - %d * %d)\n", a, b, c, d);
	printf("DIFERENCA = %d", dif);
	
	return(0);
}
