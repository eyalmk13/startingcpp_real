#include <iomanip> // for std::setw
#include <iostream>


constexpr int WIDTH = 10;
constexpr int HEIGHT = 10;


int main()
{
    for (int i = 0; i <= HEIGHT; i++)
    {
        for (int j = 0; j <= WIDTH; j++)
        {
            if (i == 0 && j == 0)
            {
                std::cout << std::setw(4) << " ";
            }
            else if (i == 0)
            {
                std::cout << std::setw(4) << j;
            }
            else if (j == 0)
            {
                std::cout << std::setw(4) << i;
            }
            else
            {
                std::cout << std::setw(4) << i * j;
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
