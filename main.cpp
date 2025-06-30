#include <cmath>
#include <iostream>


int main()
{
    double input_num = 0;
    double sqrt_number = 0;
    if (!(std::cin >> input_num))
    {
        std::cout << "input is needs to be of double type" << std::endl;
        return 1;     
    }
    if (input_num < 0)
    {
        std::cout << "input is negative can't do square root" << std::endl;
        return 1;
    }
    sqrt_number = sqrt(input_num);
    std::cout << sqrt_number << std::endl;
    return 0;
}
