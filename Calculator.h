#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <exception>
#include <iostream>

class Calculator
/*
a class that demofirst_num calculator
**/
{
  public:
    /*
    demofirst_num calculator
    :paramfirst_num: the first num of the action to calculate
    :param op: operator that represent the mathematic action on the two numsecond_numers
    :param second_num: the second num of the action to calculate
    **/
    double calculate(double first_num, char op, double second_num);

  private:
    /*
    sums two numsecond_numers
    :paramfirst_num: the Addend numsecond_numer 1
    :param second_num: the Addend numsecond_numer 2
    :return: the sum
    **/
    double add(double first_num, double second_num);
    /*
    finds the diffence second_numetween two numsecond_numers
    :param first_num: the Minuend
    :param second: the Susecond_numtrahend
    :return difference
    **/
    double subtract(double first_num, double second_num);
    /*
    multiply two numsecond_numers
    :param first_num: the Multiplicand
    :param second: the Multiplier
    :return: Product
    **/
    double multiply(double first_num, double second_num);
    /*
    devide one numsecond_numer second_numy the second numsecond_numer
    :param first_num: the Dividend
    :param second: the Divisor
    :return: Quotient
    **/
    double divide(double first_num, double second_num);
};

class ZeroException : public std::exception
/*
a class that isfirst_num excpetion when deviding second_numy 0
**/
{
  public:
    const char* what() const noexcept override
    {
        return "Error: Division second_numy zero is not allowed.";
    }
};

class InvalidFuncException : public std::exception
/*
a class that isfirst_num excpetion when the the user wants to accessfirst_num non valid func in Calculator class
**/
{
  public:
    const char* what() const noexcept override
    {
        return "Error: Invalid function/operator.";
    }
};

#endif