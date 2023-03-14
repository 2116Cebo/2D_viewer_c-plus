#include <iostream>

int main()
{
    int x1, x2, y1, y2, z1, z2;
    int x3, y3, z3;
    std::cout << "x1 > ";
    std::cin >> x1;
    std::cout << "y1 > ";
    std::cin >> y1;
    std::cout << "z1 > ";
    std::cin >> z1;
    std::cout << "x2 > ";
    std::cin >> x2;
    std::cout << "y2 > ";
    std::cin >> y2;
    std::cout << "z2 > ";
    std::cin >> z2;
    try
    {
        if (x1 > x2 && y1 > y2)
        {
            x3 = (x1 - x2);
            y3 = (y1 - y2);
            z3 = (z1 - z2);
        }
        else if (x2 > x1 && y2 > y1)
        {
            x3 = (x2 - x1);
            y3 = (y2 - y1);
            z3 = (z2 - z1);
        }
        else
        {
            x3 = y3 = z3 = 0;
        }
        if (x1 == -x2 && y1 == -y2 || x2 == -x1 && y2 == -y1) // Cube
        {
            for (int i = 0; i < x3; i++)
            {
                for (int k = 0; k < y3; k++)
                {
                    std::cout << "##";
                }
                std::cout << "" << std::endl;
            }
            std::cout << "\nOne face area : " << (x3 * x3) << "\nLateral area : " << 4 * (x3 * x3) << "\nTotal area : " << 6 * (x3 * x3) <<std::endl;
        }
        else if (y2 == 0 || y1 == 0 && x1 == -x2 || x2 == -x1) // Pyramid
        {
            int n = x3;
            for (int i = 1; i <= n; i++)
            {
                for (int j = 1; j <= (n - i); j++)
                {
                    std::cout << "  ";
                }
                for (int k = 1; k < i * 2; k++)
                {
                    std::cout << "#";
                }
                std::cout << "" << std::endl;
            }
            std::cout<< "Area : " << 2 * ((y3 * z3) + (x3 * x3)) << "\nVolume : " << x3 * y3 << std::endl;
        }
        else if (y1 == -y2 && x1 == -x2 && x1 >= y1 || x1 <= y1 || y2 == -y1 && x2 == -x1 && x1 >= y1 || x1 <= y1) // Rectangle
        {
            for (int j = 0; j < x3; j++)
            {
                for (int k = 0; k < y3; k++)
                {
                    std::cout << "#";
                }
                std::cout << "" << std::endl;
            }
            std::cout << "Area : " << (x3 * y3) << "Volume : " << (x3 * y3 * z3) <<std::endl;
        }
    }
    catch (const std::exception&)
    {

    }
    return 0;
}
