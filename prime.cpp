#include <cmath>
#include <iostream>

#include "prime.h"

/*
checking if the number is prime
:param num: the number to check
:return: if the number is prime - true,else false
*/
bool is_prime(int num);

int input_manage(int array_len)
{
    int input_num = 0;
    if (!(std::cin >> input_num))
    {
        std::cout << "input is needs to be of int type" << std::endl;
        return ERROR_INPUT;
    }
    else if (input_num <= 0)
    {
        std::cout << "input is not positive" << std::endl;
        return ERROR_INPUT;
    }
    if (input_num > array_len)
    {
        std::cout << "the input is bigger than length of array" << std::endl;
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

void fill_prime_numbers(int amount_numbers, std::array<int, ARRAY_LEN>& array_to_fill)
{
    int counter_index = 0;
    int counter_loop = INITIAL_PRIME;
    while (counter_index < amount_numbers)
    {
        if (is_prime(counter_loop))
        {
            array_to_fill[counter_index] = counter_loop;
            counter_index++;
        }
        counter_loop++;
    }
    return;
}