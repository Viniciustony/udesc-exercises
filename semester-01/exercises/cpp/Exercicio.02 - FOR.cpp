#include <iostream>
#include <locale.h>
using namespace std;

int main (void){
	setlocale(LC_ALL, "portuguese");
	
	for(int i = 1; i <= 10; i++){
		for(int j = 1; j <= 10; j++){
			cout << i << " X " << j << " = " << i * j << endl; 
		}
		cout << endl;
	}
	return 0;
}
	
