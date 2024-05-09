#include <iostream>
#include <vector>
#include <algorithm>

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















