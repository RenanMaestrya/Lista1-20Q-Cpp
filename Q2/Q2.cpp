// Escreva um algoritmo para ler as dimensões de um retângulo (base e altura), calcular e escrever a
// área do retângulo.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float base, altura, area;
	
	cout << "Digite o valor da base do retangulo: ";
	cin >> base;
	
	cout << "Digite o valor da altura do retangulo: ";
	cin >> altura;
	
	area = base * altura;
	
	cout << "A área do retangulo é igual a: " << area << "m²\n";
	
	return 0;
}
