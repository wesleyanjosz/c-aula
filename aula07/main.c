#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	int base, altura, area;
	
	printf("Digie o valor da base => ");
	scanf("%i", &base);
	printf("Digie o valor da altura => ");
	scanf("%i", &altura);
	
	area = base * altura;
	
	printf("O valor da área do retângulo é %i\n", area);
	return 0;
}
