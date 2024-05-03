#include <iostream>
#include <vector>
#include <algorithm>
#include "Multiply.h"
#include "Sum.h"
#include "Delete_zeros.h"

int main()
{
    //ВВОД СТЕПЕНЕЙ
    long long input_1;
    long long input_2;
    std::cout << "Введите первую степень двойки: ";
    std::cin >> input_1;
    std::cout << "Введите вторую степень двойки: ";
    std::cin >> input_2; 
    //проверка степеней на то что они больше 64
    if (input_1 < 64 || input_2 <= 64)
    {
        std::cout << "Степени должны быть больше 64";
        return 0;
    }
    
    //ВЕКТОР С ПЕРВЫМ ЧИСЛОМ
    std::vector<int> A = {2};

    //ВЕКТОР ДЛЯ ВОЗВЕДЕНИЯ ПЕРВОГО СЛАГАЕМОГО В СТЕПЕНЬ
    std::vector<int> C = {2};

    //ВЕКТОР ДЛЯ ВОЗВЕДЕНИЯ ВТОРОГО СЛАГАЕМОГО В СТЕПЕНЬ
    std::vector<int> D = {2};

    //ВОЗВЕДЕНИЕ ПЕРВОГО ЧИСЛА 
    for(int i = 0; i < input_1 - 1; i++)
    {
        C = Multiply(A, C);
    }

    //ВОЗВЕДЕНИЕ ВТОРОГО ЧИСЛА
    for(int i = 0; i < input_2 - 1; i++)
    {
        D = Multiply(A, D);
    }
    
    //УДАЛЯЕМ ЛИШНИЕ НУЛИ В КОНЦЕ КАЖДОГО ЧИСЛА
    C = delete_zeros(C);
    D = delete_zeros(D);

    //ПРИСВАИВАЕМ ПЕРЕМЕННОЙ RES РЕЗУЛЬТАТ СЛОЖЕНИЯ ДВУХ ЧИСЕЛ
    std::vector<int> res = sum(C, D);
    //РАЗВОРАЧИВАЕМ РЕЗУЛЬТАТ (Т.К. ОН ИЗНАЧАЛЬНО В ПЕРЕВЁРНУТОМ ВИДЕ)
    std::reverse( res.begin(), res.end() );

    //ВЫВОД РЕЗУЛЬТАТА
    std::cout << "2^(" << input_1 << ") + 2^(" << input_2 << ") = ";
    for(int i = 0; i < res.size(); i++)
    {
        std::cout << res[i];
    }
    
    return 0;
}





