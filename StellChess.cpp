#include <iostream>
using namespace std;
//Задание 1
/*int main() {
	setlocale(LC_ALL, "ru");
	int number;

	cout << "Введите число: ";
	cin >> number;

	int count = 0, zeros = 0;
	double sum = 0;

	if (number == 0) {
		count = 1;
		zeros = 1;
	}
	else {
		for (int n = number; n > 0; n /= 10) {
			int digit = n % 10;
			count++;
			sum += digit;
			if (digit == 0) zeros++;
		}
	}

	cout << "Количество цифр: " << count << endl;
	cout << "Сумма цифр: " << sum << endl;
	cout << "Среднее арифметическое: " << sum / count << endl;
	cout << "Количество нулей: " << zeros << endl;

	return 0;
}*/

//Задание 2
/*int main() {
	setlocale(LC_ALL, "ru");
	int size;
	cout << "Введите размер клеточки: ";
	cin >> size;

	for (int row = 0; row < 8; row++) {
		for (int i = 0; i < size; i++) {
			for (int col = 0; col < 8; col++) {
				if ((row + col) % 2 == 0) {
					cout << "***";
				}
				else {
					cout << "___";
				}
				if (col < 7) {
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	return 0;
}*/

//Задание 3
/*int main() {
    setlocale(LC_ALL, "ru");
    int people;
    cout << "На сколько человек заказ? ";
    cin >> people;

    int totalSum = 0;

    for (int person = 1; person <= people; person++) {
        cout << "\n--- Человек " << person << " ---" << endl;

        int personSum = 0;
        int items;

        cout << "Сколько позиций хотите заказать? ";
        cin >> items;

        for (int item = 1; item <= items; item++) {
            cout << "\nПозиция " << item << ":" << endl;
            cout << "1. Кофе - 100 руб" << endl;
            cout << "2. Чай - 80 руб" << endl;
            cout << "3. Сок - 120 руб" << endl;
            cout << "4. Пирожок - 50 руб" << endl;
            cout << "5. Торт - 200 руб" << endl;
            cout << "6. Бутерброд - 90 руб" << endl;

            int choice;
            cout << "Выберите номер: ";
            cin >> choice;

            if (choice == 1) {
                personSum += 100;
                cout << "Добавлен Кофе" << endl;
            }
            else if (choice == 2) {
                personSum += 80;
                cout << "Добавлен Чай" << endl;
            }
            else if (choice == 3) {
                personSum += 120;
                cout << "Добавлен Сок" << endl;
            }
            else if (choice == 4) {
                personSum += 50;
                cout << "Добавлен Пирожок" << endl;
            }
            else if (choice == 5) {
                personSum += 200;
                cout << "Добавлен Торт" << endl;
            }
            else if (choice == 6) {
                personSum += 90;
                cout << "Добавлен Бутерброд" << endl;
            }
            else {
                cout << "Неверный выбор!" << endl;
            }
        }

        cout << "Сумма для человека " << person << ": " << personSum << " руб" << endl;
        totalSum += personSum;
    }

    cout << "\nИТОГО: " << endl;
    cout << "Общая сумма заказа: " << totalSum << " руб" << endl;

    return 0;
}*/

//Задание 4
int main() {
    for (int row = 0; row < 10; row++) {
        for (int col = 1; col <= 10; col++) {
            if (col == 1)
                cout << "A" << row << " ";
            else if (col == 2)
                cout << "B" << row << " ";
            else if (col == 3)
                cout << "C" << row << " ";
            else if (col == 4)
                cout << "D" << row << " ";
            else if (col == 5)
                cout << "E" << row << " ";
            else if (col == 6)
                cout << "F" << row << " ";
            else if (col == 7)
                cout << "G" << row << " ";
            else if (col == 8)
                cout << "H" << row << " ";
            else if (col == 9)
                cout << "I" << row << " ";
            else if (col == 10)
                cout << "J" << row << " ";
        }
        cout << endl;
    }
    return 0;
}