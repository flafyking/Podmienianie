#include <iostream>
#include <cstring>
using namespace std;

string wyraz;


int main(int argc, char** argv) {
	cout << "Wpisz wyraz: " << endl;
	cin >> wyraz;
	char * Tablica = new char [wyraz.size()] ;
	
		for(int i = 0; i < 100; i++){
			Tablica[i] = {0};
		}
		
	for(int i = 0; i < wyraz.size(); i++){
		if(i % 2 == 1){
			Tablica[i] = wyraz[i];
		}
	}
	for(int i = 0; i < wyraz.size(); i++){
			cout << Tablica[i];
		}
	return 0;
	delete [] Tablica;
}
