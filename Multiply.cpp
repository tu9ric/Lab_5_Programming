#include <iostream>
#include <vector>
#include <algorithm>

//ФУНКЦИЯ УМНОЖЕНИЯ ДВУХ ЧИСЕЛ В ВЕКТОРАХ
/**
 * @brief функция для умножения двух чисел в векторном виде
 * 
 * @param a - первый операнд
 * @param b - второй операнд
 * @return std::vector<int> - результат умножения двух операндов
 */
std::vector<int> Multiply(const std::vector<int>& a, const std::vector<int>& b)
{
    std::vector<int> result;

    result.resize(a.size() + b.size());

    for(int i = 0; i < a.size(); i++)
    {
        int carry = 0; 
        for(int j = 0; j < b.size(); j++)
        {
            result[i + j] += a[i] * b[j] + carry;
            carry = 0;
            if (result[i + j] >= 10)
            {
                carry = result[i + j] / 10;
                result[i + j] -= carry * 10;
            }
        }
        for(size_t targetIdx = i + a.size(); carry > 0; targetIdx++)
        {
            result[targetIdx] += carry;
            carry = 0;
            if (result[targetIdx] >= 10)
            {
                carry = result[targetIdx] / 10;
                result[targetIdx] -= carry * 10;
            }
        }
    }
    
    return result;
}








