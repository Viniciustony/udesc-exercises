//Recebe dois número inteiros e efetua a  adição, caso o resultado seja maior que 10, apresentalo
#include<iostream>
#include<locale.h>

using namespace std;

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	int numero1, numero2;
	
	cout << "Digite um valor: ";
	cin >> numero1;
	
	cout << "Digite outro valor: ";
	cin >> numero2;
	
	int soma = numero1 + numero2;
	
	if(soma >= 10){
		cout << "O seu valor é: " << soma << endl;
	}
	if(soma < 10){
		cout << "O seu valor é menor que 10!";
	}
	return 0;
}
