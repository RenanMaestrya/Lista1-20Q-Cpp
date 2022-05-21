// Efetuar a leitura de um valor numérico inteiro e apresentar o resultado do valor lido elevado ao
// quadrado, sem efetuar o armazenamento do resultado em memória.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int valor;
	
	cout << "Digite um número inteiro: ";
	cin >> valor;
	
	cout << "Esse número ao quadrado é igual a: " << pow(valor,2) << "\n";
	return 0;
}
