#include <stdio.h>

void teste(){
	int a=1, b=2;
	printf("Endereco de a: %u\n", &a);
	printf("Endereco de b: %u\n", &b);
}

int main(){
	int i;
	int j = 2;
	char c1 = 'A', c2 = 'B';
	printf("Endereco de i: %u\n", &i);
	printf("Endereco de j: %u\n", &j);
	teste();
	printf("Endereco de c1: %u\n", &c1);
	printf("Endereco de c2: %u\n", &c2);

	return 0;
}
