#include <iostream>

using namespace std;

int main() {
    // Declara��o de vari�veis
    float numero1, numero2, numero3, media;

    // Entrada de dados
    cout << "Digite o primeiro numero: ";
    cin >> numero1;
    cout << "Digite o segundo numero: ";
    cin >> numero2;
    cout << "Digite o terceiro numero: ";
    cin >> numero3;

    // C�lculo da m�dia
    media = (numero1 + numero2 + numero3) / 3;

    // Sa�da de resultados
    cout << "A media dos tres numeros e: " << media << endl;

    return 0;
}

