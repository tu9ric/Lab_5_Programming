#include <iostream>
#include <vector>
#include <algorithm>
#include "Firsttask.h"
#include "Secondtask.h"
#include "Thirdtask.h"

//FROM FIRSTTASK.H
std::vector<int> delete_zeros(std::vector<int> C);
std::vector<int> delete_zeros(std::vector<int> C);
std::vector<int> Multiply(const std::vector<int>& a, const std::vector<int>& b);
std::vector<int> sum(std::vector<int> A, std::vector<int> B);

//FROM SECONDTASK.H
int returnPrivate(int dvs, int dvd);

//FROM THIRDTASK.H
void finish(double t);
void comp(std::string name);
void square_root(int num);
void divd(int dvd, double dvr);
void start();


int main()
{

    //ЗАДАНИЕ 1
    //*    
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
    //*/


    //ЗАДАНИЕ 2
    /*
    int dvs = 1000; 
    int dvd = 10;
    int result = returnPrivate(dvs, dvd); 
    std::cout << dvs << " / " << dvd << " = " << result;
    */

    //ЗАДАНИЕ 3
    /*
    start(); 
    return 0;
    */



    return 0;
}





