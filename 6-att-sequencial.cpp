#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	int a, b, x;
	
	a = 20;
	b = 46;
	x = a + b;
	
	printf("O valor da soma é: %d", x);
}
