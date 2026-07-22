//Recebe um número e realiza a raiz quadrada dele
#include<iostream>
#include<locale.h>
#include<iomanip>
#include<cmath>

using namespace std;

int main(void){
	setlocale(LC_ALL, "portuguese");
	
	float numero, resultado;
	
	cout << "Digite um valor para verificar a sua Raiz: ";
	cin >> numero;
	
	cout << fixed << setprecision(2);
	
	if(numero == 0){
		cerr << "O valor não pode ser negativo ou zero!";
		return 1;
	}
	if (numero >= 1){
		resultado = sqrt(numero);
		cout << "A raiz quadrada de " << numero << " é " << resultado << endl;
	}

	return 0;
}
