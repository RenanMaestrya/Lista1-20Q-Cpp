// Construir um programa que calcule, armazene e apresente em metros por segundo o valor da 
// velocidade de um projétil que percorre uma distância em quilômetros a um espaço de tempo em 
// minutos. Utilize a fórmula VELOCIDADE ← (DISTÂNCIA * 1000) / (TEMPO * 60).

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float distancia, tempo, velocidade;

    cout << "Digite a distancia em quilometros: ";
    cin >> distancia;

    cout << "Digite o tempo em minutos: ";
    cin >> tempo;

    velocidade = (distancia * 1000) / (tempo * 60);

    cout << "A velocidade é: " << velocidade << " m/s" << endl;

    return 0;
};