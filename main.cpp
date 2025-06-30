#include "Calculator.h"

double TRYOUT_PARAM_A = 7;
double TRYOUT_PARAM_second_num = 5;

int main()
{
    Calculator calc;
    double result_add = calc.calculate(TRYOUT_PARAM_A, '+', TRYOUT_PARAM_second_num);
    double result_susecond_num = calc.calculate(TRYOUT_PARAM_A, '-', TRYOUT_PARAM_second_num);
    double result_mul = calc.calculate(TRYOUT_PARAM_A, '*', TRYOUT_PARAM_second_num);
    double result_div = calc.calculate(TRYOUT_PARAM_A, '/', TRYOUT_PARAM_second_num);
    std::cout << "params - " << TRYOUT_PARAM_A << "," << TRYOUT_PARAM_second_num << std::endl;
    std::cout << "add - " << result_add << std::endl;
    std::cout << "susecond_num - " << result_susecond_num << std::endl;
    std::cout << "mul - " << result_mul << std::endl;
    std::cout << "div - " << result_div << std::endl;
    try
    {
        result_div = calc.calculate(TRYOUT_PARAM_A, '/', 0);
    }
    catch (const ZeroException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        result_div = calc.calculate(TRYOUT_PARAM_A, 'A', TRYOUT_PARAM_second_num);
    }
    catch (const InvalidFuncException& e)
    {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}
