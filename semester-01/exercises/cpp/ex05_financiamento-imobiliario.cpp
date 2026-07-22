//Um banco verifica se um cliente está apto a solicitar financiamento imobiliário com base nos seguintes critérios:
//Ter 25 anos ou mais e comprovar vínculo empregatício há pelo menos 3 anos
//Ter entre 18 e 24 anos e comprovar renda mensal acima de R$ 4.000,00
//Possuir mais de 10 anos de contribuição com a Previdência Social, independentemente da idade
//O programa deve ler:
//Ano de nascimento, Ano de início do vínculo empregatício, Renda mensal, Anos de contribuição com a Previdência Social
//E calcular/exibir: Idade atual, Tempo de vínculo empregatício, Se está apto ou não apto ao financiamento

#include<iostream>
#include <locale.h>
using namespace std;

int main (void) {
	setlocale(LC_ALL, "portuguese");
	
	int ano_atual = 2025;
	int ano_nascimento, ano_vinculo, idade, ano_previdencia_social;
	float renda_mensal;
	
	cout << "Avaliação 01 — Questão 5: Verificação de Elegibilidade para Financiamento Imobiliário" << endl;
	cout << "Digite a sua idade: " << endl;
	cin >> ano_nascimento;
	cout << "Digite quantos anos você possui de vínculo empregatício: " << endl;
	cin >> ano_vinculo; 
	cout << "Digite a sua renda mensal R$ " << endl;
	cin >> renda_mensal;
	cout << "Digite quantos anos de contribuição com a Previdência Social você possui: " << endl;
	cin >> ano_previdencia_social;
	
	idade = ano_atual - ano_nascimento;
	
	bool apto = false;

	if (idade >= 25 && ano_vinculo >= 3) apto = true;
	if (idade >= 18 && idade <= 24 && renda_mensal > 4000) apto = true;
	if (ano_previdencia_social > 10) apto = true;

	if (apto) {
    	cout << "Parabéns! Cliente está apto para a solicitar financiamento imobiliário." << endl;
	} 
	else {
    	cout << "Cliente não está apto." << endl;
	}
	
	return 0;
}
