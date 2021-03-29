// Find the missing parts of the given C++ program to multiply two floating point numbers.
//Expected input and output
//Input: 3.4 5.5
//Output: 18.7

#include <iostream>
//using namespace std;
int main() 
{
    double a, b, p;
    std::cout << "Enter two Numbers:";
    std::cin >> a >> b;
    p = a*b;
    std::cout << p;
    return 0;
}
