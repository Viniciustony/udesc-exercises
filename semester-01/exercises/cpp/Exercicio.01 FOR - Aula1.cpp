#include <iostream>
#include <string>
using namespace std;

int main() {
    string nome[20], sexo[20];
    int idade[20];

    // Coletando os dados das 20 pessoas
    for (int i = 0; i < 20; i++) {
        cout << "Pessoa " << i + 1 << endl;

        cout << "Digite o nome: ";
        cin >> nome[i];

        cout << "Digite o sexo (M/F): ";
        cin >> sexo[i];

        cout << "Digite a idade: ";
        cin >> idade[i];

        cout << "----------------------" << endl;
    }

    // Exibindo apenas os aprovados
    cout << "\n=== Lista de Aprovados ===\n";
    for (int i = 0; i < 20; i++) {
        if ((sexo[i] == "M" || sexo[i] == "m") && idade[i] > 21) {
            cout << "Nome: " << nome[i]
                 << " | Idade: " << idade[i]
                 << " | Sexo: " << sexo[i]
                 << " -> APROVADO\n";
        }
    }

    return 0;
}


