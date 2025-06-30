#include <iostream>

#include "prime.h"

int main()
{
    int input_num = 0;
    input_num = input_manage();
    if (input_num == ERROR_INPUT)
    {
        return 1;
    }
    if (is_prime(input_num))
    {
        std::cout << "the number is prime" << std::endl;
    }
    else
    {
        std::cout << "the number is not prime" << std::endl;
    }
    return 0;
}
