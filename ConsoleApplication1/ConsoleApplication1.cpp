// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int add(int x, int y) {
    return x + y;
}

int main()
{
    std::cout << "3 + 4 = " << add(3, 4) << std::endl;

    return 0;
}

