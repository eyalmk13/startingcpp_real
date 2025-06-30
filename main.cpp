#include <cmath>
#include <iostream>
int main()
{
    float input_num = 0;
    float sqrt_number = 0;
    std::cin >> input_num;
    if (input_num < 0)
    {
        std::cout << "input is negative can't do square root" << std::endl;
        return 1;
    }
    sqrt_number = sqrt(input_num);
    std::cout << sqrt_number << std::endl;
    return 0;
}
