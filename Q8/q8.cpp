// Faça um algoritmo que leia a idade de uma pessoa expressa em anos, meses e dias e escreva a
// idade dessa pessoa expressa apenas em dias. Considerar ano com 365 dias e mês com 30 dias.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float ano, mes, dia, anoEmDia, mesEmDia, idadeEmDias;
	cout << "Quantos anos você tem? ";
	cin >> ano;
	
	cout << "Quantos meses? ";
	cin >> mes;
	
	cout << "e quantos dias? ";
	cin >> dia;
	
	anoEmDia = ano * 365;
	
	mesEmDia = mes * 30;
	
	idadeEmDias = anoEmDia + mesEmDia + dia;
	
	
	cout << "Sua idade em dias é: " << idadeEmDias << "\n";
	return 0;
	
}
