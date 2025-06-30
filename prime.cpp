#include <cmath>
#include <iostream>

#include "prime.h"

int input_manage()
{
    int input_num = 0;
    if (!(std::cin >> input_num))
    {
        std::cout << "input is needs to be of int type" << std::endl;
        return ERROR_INPUT;
    }
    else if (input_num < FIRST_PRIMARY_NUM)
    {
        std::cout << "input is not in prime numbers range - x>=" << FIRST_PRIMARY_NUM << std::endl;
        return ERROR_INPUT;
    }
    return input_num;
}

bool is_prime(int num)
{
    int sqrt_number = 0;
    sqrt_number = static_cast<int>(sqrt(num));
    for (int i = 2; i <= sqrt_number; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}
