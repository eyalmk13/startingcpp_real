#ifndef PRIME_H
#define PRIME_H

#define ERROR_INPUT (-1)
#define FIRST_PRIMARY_NUM (2)

/*
manages input recieving from the user and checking the input
:return: if the number can be a prime (in range and in type) - unsigned number, else -1.
*/
int input_manage();

/*
checking if the number is prime
:param num: the number to check
:return: if the number is prime - true,else false
*/
bool is_prime(int num);

#endif