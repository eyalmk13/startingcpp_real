#include "composites.h"
#include <iostream>

Composites::Composites() : m_real_num(0), m_imagined_num(0)
{
    // Left blank intentionally
}
Composites::Composites(const int a, const int b) : m_real_num(a), m_imagined_num(b)
{
}
int Composites::getReal_num() const
{
    return m_real_num;
}
int Composites::getImagined_num() const
{
    return m_imagined_num;
}
void Composites::setReal_num(int real_num)
{
    m_real_num = real_num;
}
void Composites::setImagined_num(int imagined_num)
{
    m_imagined_num = imagined_num;
}
void Composites::print_num()
{
    std::cout << m_real_num << "+" << m_imagined_num << "i" << std::endl;
}
bool Composites::operator==(Composites& the_other_num)
{
    return ((the_other_num.getReal_num() == m_real_num) && (the_other_num.getImagined_num() == m_imagined_num));
}
Composites Composites::operator+(Composites& the_other_num)
{
    int sum_real_num = m_real_num + the_other_num.getReal_num();
    int sum_imagined_num = m_imagined_num + the_other_num.getImagined_num();
    return Composites(sum_real_num, sum_imagined_num);
}
Composites Composites::operator-(Composites& the_other_num)
{
    int difference_real_num = m_real_num - the_other_num.getReal_num();
    int difference_imagined_num = m_imagined_num - the_other_num.getImagined_num();
    return Composites(difference_real_num, difference_imagined_num);
}
Composites Composites::operator*(Composites& the_other_num)
{
    int other_real_num = the_other_num.getReal_num();
    int other_imagined_num = the_other_num.getImagined_num();
    int Product_real_num = (m_real_num * other_real_num) - (m_imagined_num * other_imagined_num);
    int Product_imagined_num = ((m_real_num * other_imagined_num) + (m_imagined_num * other_real_num));
    return Composites(Product_real_num, Product_imagined_num);
}
