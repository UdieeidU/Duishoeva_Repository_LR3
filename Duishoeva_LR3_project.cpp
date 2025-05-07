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
    // Задание 1. Написать программу, чтобы вывести натуральное число X:
    // Здесь должен быть ваш код
}

void inputN() {
    // Задание 2. Написать программу, чтобы ввести цифру N (меньше числа разрядов X):
    // Здесь должен быть ваш код
}

void productFirstNDigits() {
   // Задание 3. Написать программу, чтобы определить произведение первых N цифр числа X:
   // Здесь должен быть ваш код
}

void sumDigitsX() {
   // Задание 4. Написать программу, чтобы определить сумму цифр числа X:
   // Здесь должен быть ваш код
}