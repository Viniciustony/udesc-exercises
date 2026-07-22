#include <iostream>
#include <iomanip>
#include <locale.h>
#include <limits>
using namespace std;

int main (void) {
	setlocale(LC_ALL, "portuguese");
	
	float numero1, numero2;
	
	cout << "ESSE SISTEMA VERIFICA ENTRE DOIS NÚMEROS QUAL É O MAIOR";
	cout << "\n-------------------------------------------------------" << endl;
	
	while(true){
		cout << "\nDigite um número inteiro ou decimal: ";
		cin >> numero1;
		
		if(cin.fail()){
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Tente novamente! Digite apenas números";
	} else {
		break;
	}
	
}
	while(true){
		cout << "\nDigite outro número: ";
		cin >> numero2;
		
		if(cin.fail()){
		   cin.clear();
		   cin.ignore(numeric_limits<streamsize>::max(), '\n');
		   cout << "Tente novamente! Digite outro número";
		} else {
			break;
		}
	}
	cout << fixed << setprecision(2);
	
	if (numero1 > numero2) {
		cout << numero1 << " é maior que " << numero2 << endl;
	}
	else if (numero1 < numero2) {
		cout << numero2 << " é maior que " << numero2 << endl;
	} else {
		cout << "Ambos os números são semelhantes!";
	}
	system("pause");
	return 0;
}
