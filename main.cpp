#include <iostream>
#include <array>

#include "prime.h"

int main()
{
    int input_num = 0;
    const size_t ARRAY_LEN = 100; 
    int* array_numbers = new int[ARRAY_LEN];
    input_num = get_length_fill(ARRAY_LEN);
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
    delete[] array_numbers;
    return 0;
}
