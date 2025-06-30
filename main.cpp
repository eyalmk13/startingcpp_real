#include <iostream>
#include <array>

#include "prime.h"

int main()
{
    int input_num = 0;
    std::array<int, ARRAY_LEN> array_numbers {};
    input_num = input_manage(ARRAY_LEN);
    if (input_num == ERROR_INPUT)
    {
        return 1;
    }

    fill_prime_numbers(input_num, array_numbers);
    // check the function
    for (int i = 0; i < input_num; i++)
    {
        std::cout << array_numbers[i] << std::endl;
    }
    return 0;
}
