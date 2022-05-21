// Elaborar um programa de computador que calcule e apresente o valor do volume de uma esfera.
// Utilize a fórmula VOLUME ← (4 / 3) * 3.14159 * (RAIO ↑ 3).

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float raio, volume;
	cout << "Digite o valor do Raio da esfera: ";
	cin >> raio;
	
	volume = (4 * 3.14159 * pow(raio,3))/3;
	
	cout << "O volume da esfera é igual a: " << volume << "\n";
	
	return 0;
}

