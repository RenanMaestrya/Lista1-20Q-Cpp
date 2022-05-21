// Uma revendedora de carros usados paga a seus funcionários vendedores um salário fixo por mês, 
// mais uma comissão também fixa para cada carro vendido e mais 5% do valor das vendas por ele 
// efetuadas. Escrever um algoritmo que leia o número de carros por ele vendidos, o valor total de 
// suas vendas, o salário fixo e o valor que ele recebe por carro vendido. Calcule e escreva o salário 
// final do vendedor

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numeroCarros;
    float valorVendas, salario, valorPorCarro, salarioFinal;

    cout << "Digite o numero de carros vendidos: ";
    cin >> numeroCarros;
    cout << "Digite o valor total das vendas: ";
    cin >> valorVendas;
    cout << "Digite o salario do vendedor: ";
    cin >> salario;
    cout << "Digite a comissão por cada carro vendido: ";
    cin >> valorPorCarro;

    valorVendas = valorVendas * 0.05;

    salarioFinal = salario + valorVendas + (numeroCarros * valorPorCarro);


    cout << "O salario final do vendedor é: " << salarioFinal << endl;
    return 0;  
};