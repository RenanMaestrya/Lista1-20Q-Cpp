// Elaborar um programa que leia uma medida em pés, calcular, armazenar e apresentar o seu valor 
// convertido em metros, lembrando que um pé mede 0,3048 metro, ou seja, um pé é igual a 30,48 
// centímetros.


#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float pes, metros;

    cout << "Digite a medida em pés: ";
    cin >> pes;

    metros = pes * 0.3048;

    cout << "A medida em metros é: " << metros << " m" << endl;
    return 0;

};