// Faça um algoritmo que leia três notas de um aluno, calcule e escreva a média final deste aluno. 
// Considerar que a média é ponderada e que o peso das notas é 2, 3 e 5.

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float n1, n2, n3, mediaPonderada;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    cout << "Digite a terceira nota: ";
    cin >> n3;

    mediaPonderada = (n1 * 2 + n2 * 3 + n3 * 5) / 10;

    cout << "A média ponderada é: " << mediaPonderada << endl;
    if (mediaPonderada >= 6)
    {
        cout << ">>> Aluno aprovado! <<<" << endl;
    }
    else
    {
        cout << ">>> Aluno reprovado! <<<" << endl;
    }
    return 0;
};