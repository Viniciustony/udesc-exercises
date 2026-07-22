#include <iostream>
#include <locale.h>

using namespace std;

int main (void){
	setlocale(LC_ALL, "portuguese");
	
	int numero;
	
	cout<< "digite um numero: ";
	cin>> numero;
	
	if(numero % 5 == 0){
		cout << "\nO seu número é divisivel por 5... ";
	}
	else if(numero % 7 == 0){
		cout << "\nO seu número é divisivel por 7... ";
	}
	else{
		cout << "\nO seu número não é divisivel por nem um dos números! ";
	}
	return 0;
}
