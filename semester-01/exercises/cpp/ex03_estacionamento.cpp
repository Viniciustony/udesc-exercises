// Um estacionamento oferece dois tipos de serviço: 'D' para diária e 'H' para hora avulsa.
// O programa deve receber o código do tipo de serviço (apenas D ou H) e o valor cobrado por cada cliente.
// A entrada continua até que um valor negativo seja informado.
// O programa deve calcular e exibir: Valor total arrecadado com serviços por hora, Valor total arrecadado com diárias, 
// Quantidade de clientes que utilizaram a opção por hora.

#include<iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main (void) {
	setlocale(LC_ALL, "portuguese");

	char servico;
	float valor = 0, calculoDiaria = 0, calculoHora = 0;
	int contadorDiaria = 0, contadorHora = 0, encerrar;
	
	do {
		cout << "\n===================" << endl;
		cout << "Menu Estacionamento" << endl;
		cout << "===================" << endl;
		
		cout << "\nDigite o tipo de serviço que deseja selecionar!" << endl;
		cout << "\n1. Digite 'H' para serviço de Hora avulsa.";
		cout << "\n2. Digite 'D' para serviço de diária.";
		cout << "\nServiço: ";
		cin >> servico;
		
		cout << "===================" << endl;
		cout << "\nDigite o valor do serviço!" << endl;
		cout << "R$... ";
		cin >> valor;
		
		switch(servico){
			case 'H':
			case 'h':
				cout << "Serviço do tipo Hora Avulsa!" << endl;
				calculoHora += valor;
				contadorHora += 1;
				break;
				
			case 'D':
			case 'd':
				cout << "Serviço do tipo Diária!" << endl;
				calculoDiaria += valor;
				contadorDiaria += 1;
				break;
			
			default:
				cout << "Digite apenas os caracteres a seguir: 'H' 'D'...";
				break;
		}
		
		cout << "\n===================" << endl;
		cout << "\nPara sair do Menu digite um valor negativo!" << endl;
		cout << "\nPara continuar digite 1!" << endl;
		cout << "\nEscolha para encerrar/continuar: ";
		cin >> encerrar;
		
	} while (encerrar > 0);
	
	cout << "\nApós o encerramento do Menu o valor obtido para o serviço de Horas Avulso foi de R$ " << fixed << setprecision(2) << calculoHora << endl;
	cout << "O serviço do tipo Hora Avulso foi escolhido " << contadorHora << " vezes" << endl;
	
	cout << "\nApós o encerramento do Menu o valor obtido para o serviço de Diária foi de R$ " << fixed << setprecision(2) << calculoDiaria << endl;
	cout << "O serviço do tipo Diária foi escolhido " << contadorDiaria << " vezes" << endl;
	
	return 0;
}
