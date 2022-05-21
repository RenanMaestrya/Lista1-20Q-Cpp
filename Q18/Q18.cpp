// Construir um programa que leia um valor numérico inteiro e apresente como resultado 
// armazenado em memória os seus valores sucessor e antecessor.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int numero, antecessor, sucessor;

    cout << "Digite um numero: ";
    cin >> numero;

    antecessor = numero - 1;
    sucessor = numero + 1;

    cout << "O antecessor do numero digitado é: " << antecessor << endl;
    cout << "O sucessor do numero digitado é: " << sucessor << endl;

    return 0;
};
