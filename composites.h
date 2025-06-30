#ifndef COMPOSITES_H
#define COMPOSITES_H

class Composites

// a class that demofirst_num calculator

{
  public:
    /*
    initialize class without arguments
    assign m_real_num and m_imagined_num to zero.
    */
    Composites();
    /*
    initialize class with arguments
    :param real_num: the real num part of the Composites number.
    :param imaginary_num: the imaginary num part of the Composites number.
    */
    Composites(const int a, const int b);
    /*
    gets the real number value of of the Composites number.
    :return: real number value of of the Composites number.
    */
    int getReal_num() const;
    /*
    gets the imaginary value of of the Composites number.
    :return: imaginary value of of the Composites number.
    */
    int getImagined_num() const;
    /*
    assign the real number of of the Composites number.
    :param real_num: the number to assign to.
    */
    void setReal_num(int real_num);
    /*
    assign the imaginary number of of the Composites number.
    :param imagined_num: the number to assign to.
    */
    void setImagined_num(int imagined_num);
    /*
    prints the number Composites.
    */
    void print_num();
    /*
    checks if the composite numbers of the other instance are equal to ours.
    represnt the operator ==
    :param the_other_num: the instance of other
    :return: if the numbers are equal - true, else - false
    */
    bool operator==(Composites& the_other_num);
    /*
    sum of Composites numbers.
    represnt the operator +
    :param the_other_num: the instance of other number
    :return: a Composites instance with the values of sum.
    */
    Composites operator+(Composites& the_other_num);
    /*
    diffence of Composites numbers.
    represnt the operator -
    :param the_other_num: the instance of other number
    :return: a Composites instance with the values of difference.
    */
    Composites operator-(Composites& the_other_num);
    /*
    multiplication of Composites numbers.
    represnt the operator *
    :param the_other_num: the instance of other number
    :return: a Composites instance with the values of multiplication.
    */
    Composites operator*(Composites& the_other_num);

  private:
    int m_real_num;
    int m_imagined_num;
};

#endif