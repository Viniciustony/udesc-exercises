#include<iostream>
#include <locale.h>
using namespace std;

int main (void) {
	setlocale(LC_ALL, "portuguese");
	
	int vetor[8];
	int maior = 0;
	int menor_num = 0;
	long int menor = 99999999999999;
	
	for (int i = 0; i < 8; i++){
		cout << "Digite o " << (i + 1) << "° número: ";
		cin >> vetor[i];
		
		if (vetor[i] > maior){
			maior = vetor[i];
		}
		if (vetor[i] < menor){
			menor = vetor[i];
			menor_num = menor;
		}
	}
	cout << "Maior número (" << maior << "). " 
		 << "O menor número (" << menor_num << "). ";	
}
