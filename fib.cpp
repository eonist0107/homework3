#include <iostream>
#include <vector>
#include <string>

std::vector<int> fib (int length)
{
    std::vector<int> series(length);
    series[0] = 0;
    series[1] = 1;
    for (int num=2; num<length; num++) {
        series[num] = series[num-1] + series[num-2];
        }
    return series;
}

int main ()
{
    std::string again;
    do {
       std::cout << "Enter how many terms you desire: ";
       int length;
       std::cin >> length;
       std::vector<int> blank(length);
       blank = fib (length);
       for (int n=0; n<length; n++) std::cout << blank[n] << " ";
       std::cout << "\nDo it again <y/n> ? ";
       std::cin >> again;
       std::cout << std::endl;
    } while (again =="y");
}

