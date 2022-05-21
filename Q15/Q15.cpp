// Faça um algoritmo que converta graus em radianos. Imprima o valor em radianos e o seu 
// correspondente em graus.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float PI, graus, radianos;

    PI = 3.141592; 
    cout << "CONVERSOR DE GRAUS EM RADIANOS" << endl;
    cout << "Digite o valor em graus: ";
    cin >> graus;

    radianos = graus * PI / 180;

    cout << graus << " graus em radianos é: " << radianos << endl;
    return 0;
};