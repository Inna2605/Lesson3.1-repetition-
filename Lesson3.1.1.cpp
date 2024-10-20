/*Користувач вводить число. Визначити, чи є воно парним.*/

#include<iostream>
using namespace std;
int main() {
	int N;
	cout << "Vvedite chuslo: ";
	cin >> N;
	cout << "\nVashe chuslo " << N <<  ((N % 2 == 0) ? " parne " : " ne parne\n");
}