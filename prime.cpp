#include <cmath>
#include <iostream>

#include "prime.h"


int get_length_fill(int array_len)
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
    for (int i = FIRST_PRIMARY_NUM; i <= sqrt_number; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

void fill_prime_numbers(int amount_numbers, int * array_to_fill)
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
