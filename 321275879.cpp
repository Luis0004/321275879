#include <stdio.h>

int main()
{
	float radio, area;
	printf("radio: ");
	scanf_s("%f", &radio);
	area = 3.1416 * radio * radio;
	printf("El area es de: %f", area);
}