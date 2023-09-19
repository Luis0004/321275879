#include <stdio.h>

int main()
{
	float base, altura, area;
	printf("base: ");
	scanf_s("%f", &base);
	printf("altura:");
	scanf_s("%f", &altura);
	area = base * altura;
	printf("El area es de: %f", area);
}