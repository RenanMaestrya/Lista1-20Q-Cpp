//Escreva um algoritmo para ler um valor (do teclado) e escrever (na tela) o seu antecessor.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int num;
	
	cout << "Digite um número: ";
	cin >> num;
	
	cout << "O antecessor desse numero é " << num - 1 << "\n" ;
	
	return 0;
}
