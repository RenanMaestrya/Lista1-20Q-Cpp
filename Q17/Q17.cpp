// Elaborar um programa que leia uma medida em pés, calcular, armazenar e apresentar o seu valor
// convertido em metros, lembrando que um pé mede 0,3048 metro, ou seja, um pé é igual a 30,48 
// centímetros.

// NOTA: provavelmente ouve erro de digitação, então vou fazer o contrario da questão anterior e converter de metros para pés.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float metros, pes;

    cout << "Digite a medida em metros: ";
    cin >> metros;

    pes = metros / 0.3048;

    cout << "A medida em pés é: " << pes << " pés" << endl;
    return 0;
}