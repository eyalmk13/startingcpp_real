#include "Calculator.h"

double Calculator::add(double first_num, double second_num)
{
    return first_num + second_num;
}

double Calculator::subtract(double first_num, double second_num)
{
    return first_num - second_num;
}

double Calculator::multiply(double first_num, double second_num)
{
    return first_num * second_num;
}

double Calculator::divide(double first_num, double second_num)
{
    if (second_num == 0)
    {
        throw ZeroException();
    }
    return first_num / second_num;
}
double Calculator::calculate(double first_num, char op, double second_num)
{
    switch (op)
    {
    case '+': {
        return add(first_num, second_num);
    }
    case '-': {
        return subtract(first_num, second_num);
    }
    case '*': {
        return multiply(first_num, second_num);
    }
    case '/': {
        return divide(first_num, second_num);
    }
    }
    throw InvalidFuncException();
}
