#include <iostream>
#include <locale.h>

using namespace std;

int main (void){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	cout << "Digite um número: ";
	cin >> numero;
	
	if(numero % 5 == 0){
		cout << "O seu número é divisivel " << numero << endl;
	}
	else {
		cout << "\nO seu não é divisivel " << numero << endl;
	}
	return 0;
}
