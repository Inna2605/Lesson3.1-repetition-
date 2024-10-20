/*1. Користувач з клавіатури вводить 5 оцінок студента. 
Визначити, чи допущений студент до іспиту.
Студент отримує допуск, якщо його середній бал 4 і вище.

2. Користувач вводить з клавіатури число. Якщо воно парне, помножити його на три, 
інакше — поділити на два. Результат вивести на екран.

3. Написати програму-калькулятор. Користувач вводить два числа і вибирає арифметичну дію. 
Вивести на екран результат*/

#include<iostream>
using namespace std;
int main() {
	int a, N1, N2;
	cout << "Oberite zadachy:\n"
		<< "1. Vuznachutu chu e y studenta dopusk do isputy\n"
		<< "2. Arefmetuchni dii z vvedenum chuslom\n"
		<< "3. Kalkylator\n";
	cin >> a;
	switch (a) {
	case 1:
		int N3, N4, N5, SB;
		cout << "\nVvedite 5 ocinok stydenta: ";
		cin >> N1 >> N2 >> N3 >> N4 >> N5;
		SB = (N1 + N2 + N3 + N4 + N5) / 5;
		cout << "\nSerednii bal " << SB << " y studenta do isputy " << ((SB >= 4) ? " e dopysk\n" : " nemae dopysky\n");
		break;
	case 2:
		cout << "\nVvedite chuslo: ";
		cin >> N1;
		(N1 % 2 == 0) ? (cout << "\nChuslo parne. Mnozumo na tru: " << N1 * 3 << endl)
			: (cout << "\nChuslo ne parne. Dilumo na dva:  " << N1 / 2 << endl);
		break;
	case 3: {
		char n;
		cout << "\nVvedite dva chusla: ";
		cin >> N1 >> N2;
		cout << "Oberite diy:\n"
			<< "+ dodatu\n"
			<< "- vidnatu\n"
			<< "* pomnozutu\n"
			<< "/ dilutu\n"
			<< "# uznatu zalusok vid dilenna\n"
			<< "^ vozvestu v stepin (dva chisla: chuslo i stepin)\n"
			<< "% uznatu chislo vid vidsotka danogo chisla (dva chisla: chuslo i vidsotok)\n";
		cin >> n;
		switch (n) {
		case '+':
			cout << "\nSuma chisel " << N1 << " + " << N2 << " = " << N1 + N2 << endl;
			break;
		case '-':
			cout << "\nRiznuzha chisel " << N1 << " - " << N2 << " = " << N1 - N2 << endl;
			break;
		case '*':
			cout << "\nDobutok chisel " << N1 << " * " << N2 << " = " << N1 * N2 << endl;
			break;
		case '/':
			cout << "\nChastka chisel " << N1 << " / " << N2 << " = " << N1 / N2 << endl;
			break;
		case '#':
			cout << "\nZalusok vid dilenna " << N1 << " i " << N2 << " byde " << N1 % N2 << endl;
			break;
		case '^': {
			int N = 1, x = 0;
			if (N2 != 0) {
				do {
					x++;
					N *= N1;
				} while (x <= N2);
				cout << "\nChislo " << N1 << " vozvedene v stepin " << N2 << " = " << N << endl;
			}
			else {
				cout << "\nChislo " << N1 << " vozvedene v 0 stepin  =  " << 1 << endl;
			}
		}
				break;
		case '%':
			cout << "\nchislo vid vidsotka " << (float)N1 << " danogo chisla " << (float)N2 << " = " << (float)(N1 * N2) / 100 << endl;
			break;
		default: cout << "Ne virno vvedena dia!";
		}
	}
		break;
	default:cout << "Ne virno obranui variant!\n";
	}
}