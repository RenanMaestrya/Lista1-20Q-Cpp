// Elaborar um programa que calcule e apresente o valor do volume de uma caixa retangular,
// utilizando a fórmula VOLUME ← COMPRIMENTO * LARGURA * ALTURA.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float volume, comprimento, largura, altura;
	
	cout << "Digite o comprimento da caixa retangular: ";
	cin >> comprimento;
	
	cout << "Digite a largura da caixa retangular: ";
	cin >> largura;
	
	cout << "Digite a altura da caixa retangular: ";
	cin >> altura;
	
	
	volume = comprimento * largura * altura;
	
	cout << "O volume da caixa retangular é igual a: " << volume << "m³\n";
	return 0;
}
