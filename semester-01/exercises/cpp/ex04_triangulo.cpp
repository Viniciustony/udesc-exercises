//Leia três valores a, b e c. Verifique se é possível formar um triângulo (cada lado deve ser menor que a soma dos outros dois).
// Se for possível, classifique como: 
// 1. Equilátero - os três lados iguais;
// 2. Isósceles - pelo menos dois lados iguais;
// 3. Escaleno - todos os lados diferentes.

#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "portuguese");

    int a, b, c;

    cout << "Avaliação 01 — Questão 4: Classificação de Triângulos" << endl;
    cout << "Digite o primeiro valor: ";
    cin >> a;
    cout << "Digite o segundo valor: ";
    cin >> b;
    cout << "Digite o terceiro valor: ";
    cin >> c;

    if (a > 0 && b > 0 && c > 0) {
        if (a < b+c && b < a+c && c < a+b) {
            if (a != b && b != c && c != a) {
                cout << "Esse triângulo é Escaleno (Todos os lados são diferentes.)" << endl;
            }
            else if (a == b && b == c) {
                cout << "Esse triângulo é Equilátero (Todos os lados são iguais.)" << endl;
            }
            else {
                cout << "Esse triângulo é Isósceles (Pelo menos dois lados são iguais.)" << endl;
            }
        }
        else {
            cout << "Os três valores não podem formar um triângulo." << endl;
        }
    }
    else {
        cout << "Digite valores acima de zero." << endl;
    }

    return 0;
}
