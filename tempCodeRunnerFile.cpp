#include <iostream>
using namespace std;

void inputX();
void inputN();
void productFirstNDigits();
void sumDigitsX();

int main() {
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
                break;        }
    }while (choice != 0);
        return 0;
}
void inputX() {
    //TODO: Реализовать ввод натурального числа X
    //Разрабатывается Developer1 - ветка branch_fun_1
}

void inputN() {
    // TODO: Реализовать ввод цифры N (меньше количества разрядов X)
    //Разрабатывается Developer2 - ветка branch_fun_2
}

void productFirstNDigits() {
    // TODO: Реализовать вычисление произведения первых N цифр числа X
    //Разрабатывается Developer3 - ветка branch_fun_3
}

void sumDigitsX() {
    // TODO: Реализовать вычисление суммы цифр числа X
    //Разрабатывается Developer4 - ветка branch_fun_4
}