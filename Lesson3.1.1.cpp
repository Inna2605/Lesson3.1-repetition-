/*1) Користувач вводить число. Визначити, чи є воно парним.
2) Користувач вводить два числа. Вивести на екран менше з цих чисел.
3) Користувач вводить число. Визначити, додатне це число, від'ємне чи дорівнює нулю.
4) Користувач вводить два числа. Визначити, чи рівні ці числа, і якщо ні, вивести їх на екран за зростанням.*/

#include<iostream>
using namespace std;
int main() {
	int N1, N2, a;
	cout << "Oberite zadachy:\n"
		<< "1. Vuznachutu ch e vvedene chuslo parnum\n"
		<< "2. Vuvestu menshe chuslo z dvoh chusel\n"
		<< "3. Vuznachutu dane chuslo - dodatne, videmne, dorivnye nyly\n"
		<< "4. Vuznachutu chu rivni dva chusla ta vuvestu ix za zrostannam\n";
	cin >> a;
	switch (a) {
	case 1:
		cout << "\nVvedite chuslo: ";
		cin >> N1;
		cout << "\nVashe chuslo " << N1 << ((N1 % 2 == 0) ? " parne\n" : " ne parne\n");
		break;
	case 2:
		cout << "\nVvedite dva chusla: ";
		cin >> N1 >> N2;
		cout << "\nMenshe chuslo " << ((N1 < N2) ? N1 : N2) << endl;
		break;
	case 3:
		cout << "\nVvedite chuslo: ";
		cin >> N1;
		cout << "\nVashe chuslo " << N1 << ((N1 < 0) ? ": videmne\n" : (N1 > 0) ? ": dodatne\n" : ": dorivnye nyly\n");
		break;
	case 4:
		cout << "\nVvedite dva chusla: ";
		cin >> N1 >> N2;
		((N1 == N2) ? (cout << "Vashi chusla:  " << N1 << " ta " << N2 << " rivni\n")
			: (N1 < N2) ? (cout << "Chusla za zrostannam:  " << N1 << ", " << N2 << endl)
			: (cout << "Chusla za zrostannam:  " << N2 << ", " << N1 << endl));
		break;
	}
}