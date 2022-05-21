// O custo de um carro novo ao consumidor é a soma do custo de fábrica com a porcentagem do 
// distribuidor e dos impostos (aplicados ao custo de fábrica). Supondo que o percentual do 
// distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo para ler o custo de fábrica
// de um carro, calcular e escrever o custo final ao consumidor.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float custoFabrica, distribuidor, impostos, custoFinal;
    cout<< "Digite o custo de fabrica do carro!\n";
    cin >> custoFabrica;

    distribuidor = custoFabrica * 0.28;
    impostos = custoFabrica * 0.45;
    custoFinal = custoFabrica + distribuidor + impostos;

    cout << "O custo final do carro é: " << custoFinal << endl;

    return 0;
};