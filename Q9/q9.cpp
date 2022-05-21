// Escreva um algoritmo para ler o número total de eleitores de um município, o número de votos
// brancos, nulos e válidos. Calcular e escrever o percentual que cada um representa em relação ao
// total de eleitores.

#include <iostream>
#include <cmath>
using namespace std;

int main() 
{

    int eleitores, votosBrancos, votosNulos, votosValidos;
    double porcentBrancos, porcentNulos, porcentValidos;
    
    cout << "Quantos eleitores tem no município? ";
    cin >> eleitores;
    
    cout << "Quantos votos validos teve? ";
    cin >> votosValidos;
    
    cout << "Quantos votos brancos teve? ";
    cin >> votosBrancos;
    
    votosNulos = eleitores - (votosValidos + votosBrancos); //resto
    
    porcentValidos = (100 * votosValidos)/eleitores;
    cout << "Aproximadamente " << porcentValidos << "%" << " dos votos foram votos validos.\n" ;
    
    porcentBrancos = (100 * votosBrancos)/eleitores;
    cout  << "Aproximadamente " << porcentBrancos << "%" << " dos votos foram brancos.\n" ;
    
    porcentNulos = (100 * votosNulos)/eleitores;
    cout  << "Aproximadamente " << porcentNulos << "%" << " dos votos foram nulos.\n" ;
    
    return 0;
}
