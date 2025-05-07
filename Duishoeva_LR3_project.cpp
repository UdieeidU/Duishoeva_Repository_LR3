#include <iostream>
#include <locale.h>
#include <windows.h>
#include <string>
using namespace std;

int X = 0; // глобальная переменная для X
int N = 0; // глобальная переменная для N

void inputX();
void inputN();
void productFirstNDigits();
void sumDigitsX();

int main() {
    setlocale(LC_ALL, "ru_RU.UTF-8");
    SetConsoleOutputCP(65001);
    int choice;
    do {
        cout << "\n--- Меню ---\n";
        cout << "1. Ввести натуральное число X\n";
        cout << "2. Ввести цифру N (меньше числа разрядов X)\n";
        cout << "3. Определить произведение первых N цифр числа X\n";
        cout << "4. Определить сумму цифр числа X\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт меню: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputX();
                break;
            case 2:
                inputN();
                break;
            case 3:
                productFirstNDigits();
                break;
            case 4:
                sumDigitsX();
                break;
            case 0:
                cout << "Выход из программы.\n";
                break;
            default:
                cout << "Неверный выбор. Повторите попытку.\n";
                break;
        }
    } while (choice != 0);

    return 0;
}

void inputX() {
    cout << "Введите натуральное число X: ";
    cin >> X;
}

void inputN() {
    int digits = to_string(X).length();
    do {
        cout << "Введите цифру N (меньше " << digits << "): ";
        cin >> N;
        if (N >= digits) {
            cout << "Ошибка: N должно быть меньше количества цифр X.\n";
        }
    } while (N >= digits);
}

void productFirstNDigits() {
    string strX = to_string(X);
    int product = 1;
    for (int i = 0; i < N; ++i) {
        product *= (strX[i] - '0');
    }
    cout << "Произведение первых " << N << " цифр числа X: " << product << endl;
}

void sumDigitsX() {
    string strX = to_string(X);
    int sum = 0;
    for (char ch : strX) {
        sum += (ch - '0');
    }
    cout << "Сумма цифр числа X: " << sum << endl;
}