#include <iostream>
#include <locale>
#include <limits> // necessário para std::numeric_limits
using namespace std;

int main(void) {
    setlocale(LC_ALL, "portuguese");

    int numero;

    do {
        cout << "Digite um número de 1 a 10 gravado no sistema: ";
        cin >> numero;

        // Verifica se a entrada é inválida
        if (cin.fail()) {
            cin.clear(); // limpa o erro
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // descarta o restante da entrada
            cout << "Digite apenas números inteiros!" << endl;
            continue; // volta ao início do loop
        }

        if (numero == 10) {
            cout << "Número correto!" << endl;
            break; // sai do loop
        } else {
            cout << "Número incorreto, tente novamente." << endl;
        }

    } while (numero != 10);

    return 0;
}
