// Faça um algoritmo para calcular a distância entre dois pontos. Entre com o valor de X1, X2, Y1, 
// Y2

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x1, x2, y1, y2, distancia;
    
    cout << "Digite o valor de x1: ";
    cin >> x1;

    cout << "Digite o valor de x2: ";
    cin >> x2;

    cout << "Digite o valor de y1: ";
    cin >> y1;

    cout << "Digite o valor de y2: ";
    cin >> y2;

    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    cout << "A distancia entre os pontos é: " << distancia << endl;
    return 0;

};