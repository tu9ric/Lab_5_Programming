#include <iostream>

/**
 * @brief функция возвращает частное от деления двух знаковых целых чисел 
 * используя операции битового сдвига и побитовых операций.
 * 
 * @param dvs - делимое
 * @param dvd - делитель
 * @return int - частное от деления
 */
int returnPrivate(int dvs, int dvd){
    int result = 0;
    //определение знака числа путём битовых операций
    int sign = ((dvs & (1 << 31)) != (dvd & (1 << 31))) ? -1 : 1;
    dvs = (dvs >= 0) ? dvs : -dvd;
    dvd = (dvd >= 0) ? dvd : -dvd;
    dvd = ~dvd + 1;
    while(dvs + dvd >= 0){
        result++;
        dvs = dvs + dvd;
    }
    result = result * sign;
    
    if(result > INT_MAX)
    {
        return INT_MAX;
    }
    if(result < INT_MIN)
    {
        return INT_MIN;
    }
    return result;
}





