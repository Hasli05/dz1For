using namespace std;
#include <iostream>


int main() {
	setlocale(LC_ALL, "Ukr");
	double raw_numbers = 0;
	string yesOrNo = "Y";


	for (int i = 1; i != -1 || i != 0;) {
		if (i == 0) {
			cout <<"Шось не то ввiв" << endl;
			cout << "Щоб продовжити напишiть Y, щоб завершити N" << endl;
			cin >> yesOrNo;

			if (yesOrNo == "Y") {
				i = 1;
			}
			if (yesOrNo == "N") {
				i = -1;
			}
			if(yesOrNo != "Y" && yesOrNo !="N"){
				i = 0;
			}
		}

		if (i == 1) {
			cout << "Введiть значення" << endl;
			cin >> raw_numbers;
			cout << raw_numbers * raw_numbers << endl;

			cout << "Щоб продовжити напишiть Y, щоб завершити N" << endl;
			cin >> yesOrNo;

			if (yesOrNo == "Y") {
				i = 1;
			}
			if (yesOrNo == "N") {
				i = -1;
			}
			else {
				i = 0;
			}
		}

		if (i == -1) {
			cout << "Завершення" << endl;
			break;
		}
	}
}