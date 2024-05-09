#include <iostream>
#include <vector>
#include <algorithm>

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


