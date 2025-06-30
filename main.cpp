#include "composites.h"
#include <iostream>

int main()
{
    Composites first(2, 2);
    Composites second;
    std::cout << second.getReal_num() << "+" << second.getImagined_num() << "i" << std::endl;
    second.setImagined_num(6);
    second.setReal_num(5);
    second.print_num();
    if (!(first == second))
    {
        std::cout << "they arent equal" << std::endl;
    }
    Composites sum = first + second;
    sum.print_num();
    Composites differ = first - second;
    differ.print_num();
    Composites product = first * second;
    product.print_num();
    return 0;
}
