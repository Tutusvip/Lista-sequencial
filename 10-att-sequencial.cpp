#include <stdio.h>
#include <math.h>

int main(){
	double x1, x2, y1, y2, resultadoPowX, resultadoPowY, raiz;
	
	printf("Digite o primeiro valor de X: ");
	scanf("%lf", &x1);
	printf("Digite o segundo valor de X: ");
	scanf("%lf", &x2);
	printf("Digite o primeiro valor de Y: ");
	scanf("%lf", &y1);
	printf("Digite o segundo valor de Y: ");
	scanf("%lf", &y2);
	
	resultadoPowX = pow(x2 - x1, 2);
	resultadoPowY = pow(y2 - y1, 2);
	
	raiz = sqrt(resultadoPowX + resultadoPowY);
	printf("Distancia = %.4lf", raiz);
	
	return(0);
}

