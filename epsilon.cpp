#include <iostream>
#include <limits>

int main() {

    double a = 1.0;
    double b = 1.0 + std::numeric_limits<double>::epsilon();
    double c = 1.0 + 1/2 * std::numeric_limits<double>::epsilon();
    double d = 1.0 + 2 * std::numeric_limits<double>::epsilon();

    if (a == b) {std::cout << "1.0 + epsilon equals 1.0" << std::endl;} 
    else {std::cout << "1.0 + epsilon is not equal to 1.0" << std::endl;}

    if (a == c) {std::cout << "1.0 + half epsilon equals  1.0" << std::endl;} 
    else {std::cout << "1.0 + half epsilon is not equal to 1.0" << std::endl;}

    if (a == d) {std::cout << "1.0 + (2 * epsilon equals)  1.0" << std::endl;}
    else {std::cout << "1.0 + (2 * epsilon) is not equal to 1.0" << std::endl;}


}
