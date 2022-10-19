#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "portuguese_Brazil");
	int A, B, X;
	
	A = 10;
	B = 36;
	X = A + B;
	
	printf("O valor da soma é: %d", X);
}
