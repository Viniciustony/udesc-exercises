// Construir um algoritmo que leia dois número.
// Efetue a adição dos números lidos. 
//Caso o valor seja maior que 20, este deverá ser apresentado subtraindo 5
#include <iostream>
#include <locale.h>
using namespace std;

int main () {
	setlocale(LC_ALL, "portuguese");
	
	float num1, num2, soma;
	
	cout << "Digite um número: ";
	cin >> num1;
	cout << "Digite outro número: ";
	cin >> num2;
	
	soma = num1 + num2;
	
	if(soma > 20){
		cout << "O seu valor é: " << soma - 5 << endl; 
	}
	return 0;
}
