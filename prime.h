#ifndef PRIME_H
#define PRIME_H
#include <array>

#define ERROR_INPUT (-1)
#define FIRST_PRIMARY_NUM (2)
#define INITIAL_PRIME (2)
#define ARRAY_LEN (100)

/*
manages input recieving from the user and checking the input
:param array_len: the length of the array to put in the prime numbers
:return: if the number can be a prime (in range and in type) - unsigned number, else -1.
*/
int input_manage(int array_len);

/*
Fills the provided array with the first `amount_numbers` prime numbers.
:param amount_numbers:the amount of prime numbers to generate and put in array
:param array_to_fill:the arrray to fill.
:return: None
*/
void fill_prime_numbers(int amount_numbers, std::array<int, ARRAY_LEN>& array_to_fill);
#endif