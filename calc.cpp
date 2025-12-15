#include <iostream>

int main() 
{
    int num1;
    int num2;
    char math; 

    std::cout << "Введите первое число: ";
    std::cin >> num1;

    std::cout << "Введите второе число: ";
    std::cin >> num2;

    std::cout << "Выберите действие (+, -, *, /): ";
    std::cin >> math;
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
