//Receber dois números, efetuar a adição deles, caso o valor seja 20 ele deverá ser apresentado subtraindo por 5.
#include<iostream>
#include<locale.h>

using namespace std;

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	float numero1, numero2, soma;
	
	cout << "Digite um valor: ";
	cin >> numero1;
	
	cout << "Digite outro valor: ";
	cin >> numero2;
	
	soma = numero1 + numero2;
	
	if(soma > 20){
		cout << "O seu valor é: " << soma << " e com a subtração fica: " << soma - 5 << endl;
	}
	if(soma <= 20){
		cout << "O seu valor é: " << soma << endl;
	}
	return 0;
}
