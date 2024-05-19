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



//удаление лишних нулей в конце
/**
 * @brief функция которая удаляет лишние нули в конце вектора
 * 
 * @param C - вектор в котором нужно удалить лишние нули в конце
 * @return std::vector<int> - вектор без лишних нулей в конце
 */
std::vector<int> delete_zeros(std::vector<int> C)
{
    int i = C.size(); 
    while(C[i - 1]  == 0)
    {
        C.pop_back();
        i--;
    }
    return C;
}


/**
 * @brief функция для сложения двух чисел(числа в векторном виде)
 * функция работает по принципу сложения двух чисел в столбик
 * @param A - первое слагаемое(вектор)
 * @param B - второе слагаемое(вектор)
 * @return std::vector<int> 
 */
std::vector<int> sum(std::vector<int> A, std::vector<int> B)
{
    int carry = 0;
    for(int i = 0; i < std::max(A.size(), B.size()) || carry; i++)
    {    
        if(i == A.size())
            A.push_back(0);
        A[i] += carry + (i < B.size() ? B[i] : 0);
        carry = A[i] >= 10;
        if (carry) A[i] -= 10;
    }
    return A;
}
