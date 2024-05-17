#include<iomanip>
#include<iostream>
#include <cctype>

int main() {

    // <iomanip>
    int num1 = 123;
    int num2 = 456;

    std::cout << std::setw(10) << std::right << num1 << std::endl;
    std::cout << std::setw(10) << std::right << num2 << std::endl;

    double number = 3.14159265358979323846;
    // Устанавливаем точность вывода до 3 значащих цифр
    std::cout << std::setprecision(3) << number << std::endl; // 3.14

    double number = 123456.789;
    // Выводим число в научной нотации
    std::cout << std::scientific << number << std::endl; // 1.234568e+05

    double number = 123456.789;
    // Выводим число в фиксированной десятичной форме с двумя знаками после запятой
    std::cout << std::fixed << std::setprecision(2) << number << std::endl; // 123456.79

    //-----------------------------------------------------------------------//
    //-----------------------------------------------------------------------//

    // <cctype>

    std::string H = "hello";
    std::cout << H << std::endl;
    std::cout << toupper(H[0]) << " " << tolower(H[0};

    return 0;
}
