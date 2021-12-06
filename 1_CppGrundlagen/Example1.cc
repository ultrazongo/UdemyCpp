#include <iostream>

// 1.) User-Input: side length of a square
// 2.) Compute the perimeter and area of a square.
// 3.) Print out the values to the console.

int main()
{
    double a;
    std::cout << "Please enter the value of a: ";
    std::cin >> a;

    double perimeter = 4 * a;
    double area = a * a;

    std::cout << "The perimeter is: " << perimeter << std::endl;
    std::cout << "The area is: " << area << std::endl;
    std::cout << std::endl;

    return 0;
}
