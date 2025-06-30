#ifndef PRIME_H
#define PRIME_H
#include <array>

#define ERROR_INPUT (-1)
#define FIRST_PRIMARY_NUM (2)
#define INITIAL_PRIME (2)

/*
manages input recieving of the length and checking is good for use. 
:param array_len: the length of the array to put in the prime numbers
:return: if the number can be a length of array (in range and in type) - unsigned number, else -1.
*/
int get_length_fill(int array_len);
/*
checking if the number is prime
:param num: the number to check
:return: if the number is prime - true,else false
*/
bool is_prime(int num);
/*
Fills the provided array with the first `amount_numbers` prime numbers.
:param amount_numbers:the amount of prime numbers to generate and put in array
:param array_to_fill:the arrray to fill.
:return: None
*/
void fill_prime_numbers(int amount_numbers, int * array_to_fill);
#endif
