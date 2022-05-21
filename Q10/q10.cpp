// Escreva um algoritmo para ler o salário mensal atual de um funcionário e o percentual de reajuste.
// Calcular e escrever o valor do novo salário.

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
	double sal, reajuste, percentualReajuste, salFinal;
	
	cout << "Qual seu salário mensal? ";
	cin >> sal;
	
	cout << "Qual foi o reajuste? ";
	cin >> reajuste;
	
	percentualReajuste = reajuste / 100;
	
	cout << "Como o percentual de reajuste é de " << reajuste << "%\n";

	
	salFinal = sal + (sal * percentualReajuste);
	
	cout << "Seu salário somado ao percentual de reajuste é igual a: " << salFinal << "\n";
	return 0;
}
