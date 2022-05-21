// Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula
// de conversão é F ← C * 9 / 5 + 32, sendo F a temperatura em Fahrenheit e C a temperatura em
// Celsius.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float c, f;
	
	cout << "Digite a temperatura em Celsius para converte-la em Fahrenheit: ";
	cin >> c;
	
	f = c * 9/5 + 32; //formula de transformação de temperatura
	
	cout << c << " graus Celsius em Fahrenheit é " << f << "\n"; 
	return 0;
}
