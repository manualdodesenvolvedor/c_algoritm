#include <stdio.h>
void main() 
{
	float a, b, c;
	
	printf("Digite o lado A do triangulo: ");
	scanf("%f", &a);
	
	printf("\nDigite o lado B do triangulo: ");
	scanf("%f", &b);
	
	printf("\nDigite o lado C do triangulo: ");
	scanf("%f", &c);
	
	// Equilatero: Todas as medidas s�o iguais
	if ((a == b) && (a == c)) 
	  printf("\n\nEh um triangulo Equilatero!");
	// Escaleno: Todas as medidas s�o diferentes  
	else if ((a != b) && (a != c) && (b != c))
	  printf("\n\nEh um triangulo Escaleno!");
	// Is�sceles: Apenas duas medidas iguais  
	else
	  printf("\n\nEh um triangulo Iscosceles!");	
	getch();
}
