//Find the missing in the given C++ program to add two integer numbers.

//Expected input and output
//Input: Enter two numbers: 2 3
//Output: The sum of two numbers is 5

#include <iostream>
using namespace std;
int main()
{
    int x,y,s;
    std::cout << "Enter two integers: ";
    std::cin >> x >> y;
    s = x + y;
    std::cout << s; // Print the sum by inserting the correct variable
    return 0;
}
