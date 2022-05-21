// Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em graus Celsius. A fórmula
// de conversão é C ← ((F – 32) * 5) / 9, sendo F a temperatura em Fahrenheit e C a temperatura em
// Celsius.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float f, c;
	
	cout << "Digite a temperatura em Fahrenheit para converte-la em Celsius: ";
	cin >> f;
	
	c = ((f - 32)*5)/9; // formula da transformação de temp F > C
	
	cout << f << " graus Fahrenheit em Celsius é " << c << " graus\n"; 
	return 0;
}
