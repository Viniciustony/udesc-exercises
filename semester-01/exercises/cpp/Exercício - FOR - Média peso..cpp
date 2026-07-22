// Algoritmo que recebe a idade e o peso de 20 pessoas.
// calcular e imprimir as médias dos pesos por faixa etária.
// Faixas etária 1 a 10 anos, 11 a 20 anos, 21 a 30 anos e maiores de 30 anos.
#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main (void) {
	setlocale(LC_ALL, "portuguese");
	
	int idade;
	double peso;
	int cont_1 = 0, cont_2 = 0, cont_3 = 0, cont_4 = 0;
	int med_1 = 0, med_2 = 0, med_3 = 3, med_4 = 0;
	
	for (int i = 1; i <= 5; i++){
		
		cout << i << "° Pessoa - " << " Digite a sua idade: ";
		cin >> idade;
		
			if (idade <= 0){
				cerr << "ERRO! Digite um número menor que 0 (ZERO)..." << endl;
				return 1;
			} 
			else if (idade >= 110){
				cerr << "ERRO! Digite uma idade verdadeira..." << endl;
				return 2;
			}
		
		cout << i << "° Pessoa - " << " Digite o seu peso: ";
		cin >> peso;
	}
			if (peso <= 0){
				cerr << "ERRO! O peso tem que ser maior que 0 (ZERO)...";
				return 3;
			}
			else if (peso > 300){
				cerr << "ERRO! O peso tem que ser verdadeiro...";
				return 4;
			}
		if (idade > 0 || idade <= 10){
				med_1 = med_1 + peso;
				cont_1++;
		}
		if (idade > 10 || idade <= 20){
				med_2 = med_2 + peso;
				cont_2++;
		}
		if (idade > 20 || idade <= 30){
				med_3 = med_3 + peso;
				cont_3++;
		}
		if (idade > 30){
				med_4 = med_4 + peso;
				cont_4++;
		}
		
	if (cont_1 > 0){
		cout << "A média de peso da faixa etária de 1 a 10 anos é de: " << med_1 / cont_1 << " Kg." << endl;
	}
	if (cont_2 > 0){
		cout << "A média de peso da faixa etária de 11 a 20 anos é de: " << med_2 / cont_2 << " Kg." << endl;
	}
	if (cont_3 > 0){
		cout << "A média de peso da faixa etária de 21 a 30 anos é de: " << med_3 / cont_3 << " Kg." << endl;
	}
	if (cont_4 > 0){
		cout << "A média de peso da faixa etária de pessoas de mais de 30 anos é de: " << med_4 / cont_4 << " Kg." << endl;
	}
	return 0;
}
		
