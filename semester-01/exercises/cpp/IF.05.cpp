//Recebe um número e diz se ele é multiplo de 3 ou se ele não é multilo de 3
#include<locale.h>
#include<iostream>

using namespace std;

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	cout << "Digite um valor: ";
	cin >> numero;
	
	if(numero % 3 == 0){
		cout << numero <<" é multiplo de 3" << endl;
	}
	else {
		cout << numero << " não é multiplo de 3" << endl;
	}
	return 0;
}
