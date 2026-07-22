//Entrar com um número e apresentar se ele for maior que 20.
#include<locale.h>
#include<iostream>

using namespace std;

int main (void){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	cout << "Digite um valor para o nosso sistema: ";
	cin >> numero;
	
	if (numero > 20){
		cout << numero << " é maior que 20!" << endl;
	}
	if (numero <= 20){
		cout << numero << " é menor que 20!" << endl;	
		}
	return 0;
}
