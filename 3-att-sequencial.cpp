#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
#define zero 0
int main(){
    setlocale(LC_ALL , "Portuguese_Brazil");
	int n1, bole;
	float n2;
	double n3;
	char letra, string[100];
	
	printf("Digite o numero inteiro: ");
	scanf("%d", &n1);
	printf("Digite os dois numeros reais: ");
	scanf("%f%lf", &n2,&n3);
		fflush(stdin);
	printf("Digite o caracter: ");
	scanf("%c", &letra);
		fflush(stdin);
	printf("Digite a frase: ");
	fgets(string, 100, stdin);
	printf("Digite o numero para saber se ele é positivo ou negativo: ");
	scanf("%d", &bole);
	printf("Numero inteiro: %d\n", n1);
	printf("Numeros reais:\n%f\n%fl\n", n2, n3);
	printf("Letra: %c\n", letra);
	printf("String: %s", string);
	
    if (bole > zero)
	    printf("Logico: Positivo");
	    else printf("Logico: Negativo");
	    
	return(0);
}
