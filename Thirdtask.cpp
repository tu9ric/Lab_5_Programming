#include <iostream>
#include <cmath>

void finish(double t)
{
    std::cout << "Пройдено" << std::endl;
    if (t != 9.81)
    {
        throw t;
    }
    std::cout << "6 pass" << std::endl;
}

void comp(std::string name)
{
    std::cout << "Хорошая работа, " << name << "!" << std::endl;
    double g; 
    std::cout << "Введите значение ускорения свободного падения: "; 
    std::cin >> g;
    try
    {
        finish(g); 
    }
    catch(double g)
    {
        std::cout << "Вы неверно ввели ускорение свободного падения!" << std::endl; 
    }
    std::cout << "5 pass" << std::endl;
}

void square_root(int num)
{
    std::string name;
    std::cout << "Введите своё имя: ";
    std::cin >> name;
    comp(name); 
    if (num < 0)
    {
        throw num;
    }
    else
    {
        std::cout << num << "^(1/2) = " << sqrt(num) << std::endl;
    }
    std::cout << " 4 pass" << std::endl;
}

namespace my{

void divd(int dvd, double dvr)
{
    int num; 
    std::cout << "Введите число, из которого хотите извлечь квадратный корень: ";
    std::cin >> num;
    try
    {
        square_root(num);
    }
    catch(int num)
    {
        std::cout << "Из отрицательного числа нельзя взять квадратный корень!" << std::endl;
    }
    if((dvd == 0) && (dvr != 0))
    {
        throw dvd;
    }
    else if((dvd != 0) && (dvr == 0))
    {
        throw dvr;
    }
    else if ((dvd != 0) && (dvr == 0))
    {
        throw dvr;
    }
    else
    {
        std::cout << dvd << " / " << dvr << " = " << dvd / dvr << std::endl;
    }
    std::cout << "3 pass" << std::endl;
}

}

void start()
{
    int dividend; 
    int divider; 
    std::cout << "Введите целое делимое: ";
    std::cin >> dividend; 
    std::cout << "Введите делитель: ";
    std::cin >> divider;
    try
    {
        my::divd(dividend, divider);
    }
    catch(int dividend)
    {
        std::cout << "0 / (любое число) = 0" << std::endl;
    }
    catch (double divider)
    {
        std::cout << "На ноль делить нельзя!" << std::endl;
    }
    catch(...)
    {
        std::cout << "exception\n";
    }
    std::cout << "2 pass" << std::endl;
}








