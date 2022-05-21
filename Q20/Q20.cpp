// Elaborar um programa que leia dois valores numéricos reais desconhecidos representados pelas 
// variáveis A e B. Calcular, armazenar e apresentar os resultados das quatro operações aritméticas 
// básicas.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float a, b, soma, subtracao, multiplicacao, divisao, resto;

    cout << "Digite o valor de A: ";
    cin >> a;

    cout << "Digite o valor de B: ";
    cin >> b;

    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    cout << "A soma dos valores é: " << soma << endl;
    cout << "A subtração dos valores é: " << subtracao << endl;
    cout << "A multiplicação dos valores é: " << multiplicacao << endl;
    cout << "A divisão dos valores é: " << divisao << endl;

    return 0;
};