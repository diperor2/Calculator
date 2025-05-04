#include <iostream>

int main() 
{
    int num1;
    int num2;
    char math; // Операция: +, -, *, /

    // Ввод первого числа
    std::cout << "Введите первое число: ";
    std::cin >> num1;

    // Ввод второго числа
    std::cout << "Введите второе число: ";
    std::cin >> num2;

    // Ввод операции
    std::cout << "Выберите действие (+, -, *, /): ";
    std::cin >> math;

    // Выполнение операции в зависимости от введенного действия
    switch (math) {
        case '+':
            std::cout << "Результат: " << num1 + num2 << std::endl;
            break;
        case '-':
            std::cout << "Результат: " << num1 - num2 << std::endl;
            break;
        case '*':
            std::cout << "Результат: " << num1 * num2 << std::endl;
            break;
        case '/':
            if (num2 != 0) {
                std::cout << "Результат: " << num1 / num2 << std::endl;
            } else {
                std::cout << "Ошибка: деление на ноль!" << std::endl;
            }
            break;
        default:
            std::cout << "Некорректный оператор!" << std::endl;
            break;
    }

    return 0;
}