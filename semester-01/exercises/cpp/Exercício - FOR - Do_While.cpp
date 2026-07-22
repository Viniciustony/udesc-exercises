#include <iostream>
#include <locale.h>
#include <iomanip>
using namespace std;

int main (void) {
	setlocale(LC_ALL, "portuguese");
	
	int a = 1;
	
	do {
		cout << "\n" << a;
		a++;
	}
	while (a <= 10);
	return 0;
} 
